#include "BreakOut.h"

BreakOut::BreakOut() {
    brokenBlocks = 0;

    t1.loadFromFile("images/block.png");
    t2.loadFromFile("images/background.png");
    t3.loadFromFile("images/ball.png");
    t4.loadFromFile("images/paddle.png");

    background.setTexture(t2);
    ball.setTexture(t3);
    paddle.setTexture(t4);

    paddle.setPosition(rand() % 480 + 1, 460);

    font.loadFromFile("resources/sansation.ttf");

    text.setFont(font);
    text.setString("Hello world");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);
    text.setPosition(Vector2f(300, 400));

    blocks.resize(NUMOFBLOCK);

    blockSize = t1.getSize();

    dx = 3;
    dy = 3;

    int n = 0;
    for (int i = 1; i <= sqrt(NUMOFBLOCK); i++) {
        for (int j = 1; j <= sqrt(NUMOFBLOCK); j++) {
            blocks[n].setTexture(t1);
            blocks[n].setPosition(i * blockSize.x, j * blockSize.y);
            n++;
        }
    }

    ball.setPosition(rand() % 600 + 1, rand() % 300 + 1);
}

void BreakOut::Play() {
    srand(time(NULL));

    RenderWindow window(VideoMode(SCREENWIDTH, SCREENHEIGHT), "BREAKOUT");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        ball_pos = ball.getPosition();
        CheckEvent(window);

        if (!ColPaddle()) {
            GameOver();
            DrawSprite(window);
            continue;
        }
        ColBlock();

        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            if (isPause) {
                isPause = false;
            } else {
                isPause = true;
            }

            continue;
        }

        if (isPause) {
        } else {
            MovePaddle();
            MoveBall();
        }

        text.setFont(font);
        text.setString(isPause ? "Pause" : std::to_string(brokenBlocks));
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::Red);
        text.setPosition(Vector2f(300, 400));

        DrawSprite(window);
    }
}

void BreakOut::CheckEvent(RenderWindow& _window) {
    Event e;
    while (_window.pollEvent(e)) {
        if (e.type == Event::Closed) {
            _window.close();
        }
    }
}

void BreakOut::DrawSprite(RenderWindow& _window) {
    _window.clear();
    _window.draw(background);
    _window.draw(ball);
    _window.draw(paddle);

    for (auto& obj : blocks) _window.draw(obj);

    _window.draw(text);
    _window.display();
}

bool BreakOut::ColPaddle() {
    if (!FloatRect(ball_pos.x + 3, ball_pos.y + 3, 6, 6)
             .intersects(paddle.getGlobalBounds()) &&
        ball_pos.y > 450) {
        return false;
    }
    return true;
}

void BreakOut::MovePaddle() {
    auto a = paddle.getPosition().x;

    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        if (paddle.getPosition().x < SCREENWIDTH - 90) {
            paddle.move(5, 0);
        }
    }

    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        if (paddle.getPosition().x > 0) {
            paddle.move(-5, 0);
        }
    }
}

void BreakOut::GameOver() {
    text.setFont(font);
    text.setString("20231623 Park Hyun Woo");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);
    text.setPosition(Vector2f(300, 400));
}

void BreakOut::ColBlock() {
    ball_pos.x += dx;
    for (int i = 0; i < blocks.size(); i++) {
        if (FloatRect(ball_pos.x + 3, ball_pos.y + 3, 6, 6)
                .intersects(blocks[i].getGlobalBounds())) {
            blocks.erase(blocks.begin() + i);
            brokenBlocks++;
            dx = -dx;
        }
    }

    ball_pos.y += dy;
    for (int i = 0; i < blocks.size(); i++) {
        if (FloatRect(ball_pos.x + 3, ball_pos.y + 3, 6, 6)
                .intersects(blocks[i].getGlobalBounds())) {
            blocks.erase(blocks.begin() + i);
            brokenBlocks++;
            dy = -dy;
        }
    }
}

void BreakOut::MoveBall() {
    if (ball_pos.x < 0 || ball_pos.x > SCREENWIDTH - 30) dx = -dx;
    if (ball_pos.y < 0 || ball_pos.y > SCREENHEIGHT - 30) dy = -dy;
    if (FloatRect(ball_pos.x, ball_pos.y, 12, 12)
            .intersects(paddle.getGlobalBounds()))
        dy = -(rand() % 5 + 2);

    ball.setPosition(ball_pos.x, ball_pos.y);
}

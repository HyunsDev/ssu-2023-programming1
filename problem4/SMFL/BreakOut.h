#pragma once

#include <time.h>

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace sf;

#define SCREENWIDTH 600.f
#define SCREENHEIGHT 480.f
#define NUMOFBLOCK 100

class BreakOut {
   public:
    BreakOut();

   public:
    int brokenBlocks;

    void Play();
    void CheckEvent(RenderWindow&);
    void DrawSprite(RenderWindow&);
    void MovePaddle();
    bool ColPaddle();
    void ColBlock();
    void MoveBall();
    void GameOver();

   private:
    Texture t1, t2, t3, t4;
    Sprite background, ball, paddle;

    Font font;
    Text text;

    Vector2u blockSize;

    std::vector<Sprite> blocks;

    bool isPause;

   private:
    Vector2f ball_pos;
    float dx, dy;
};

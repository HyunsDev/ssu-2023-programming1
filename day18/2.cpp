#include <iostream>
#include <string>

using namespace std;

class Car {
   public:
    int speed;
    int gear;
    string color;

    void speedUp();
    void speedDown();
};

void Car::speedUp() { speed++; };
void Car::speedDown() { speed--; };

int main() {
    Car myCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    cout << myCar.speed << endl;
    cout << myCar.gear << endl;
    cout << myCar.color << endl;

    myCar.speedUp();
    cout << myCar.speed << endl;

    myCar.speedDown();
    cout << myCar.speed << endl;

    return 0;
}
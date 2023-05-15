#include "car.h"

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

    myCar.printSpeed();

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Car {
   public:
    int speed;
    int gear;
    string color;

    void speedUp() { speed++; }
    void speedDown() { speed--; }
};

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

    Car yourCar;

    yourCar.speed = 50;
    yourCar.gear = 1;
    yourCar.color = "blue";

    cout << yourCar.speed << endl;
    cout << yourCar.gear << endl;
    cout << yourCar.color << endl;

    yourCar.speedUp();
    cout << yourCar.speed << endl;

    yourCar.speedDown();
    cout << yourCar.speed << endl;

    return 0;
}
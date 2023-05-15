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
    void printSpeed();
};
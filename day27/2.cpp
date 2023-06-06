#include <iostream>

using namespace std;

class Pizza {
    int radius;

   public:
    Pizza(int radius) { this->radius = radius; }

    ~Pizza() { cout << "소멸자 호출" << endl; }

    void setRadius(int radius) { this->radius = radius; }

    void print() { cout << "피자 반지름: " << radius << endl; }
};

void upgrade(Pizza *pPizza) { pPizza->setRadius(20); }

int main() {
    Pizza *pPizza = new Pizza(10);

    pPizza->print();

    upgrade(pPizza);

    pPizza->print();

    delete pPizza;

    return 0;
}
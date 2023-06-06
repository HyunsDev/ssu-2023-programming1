#include <iostream>
using namespace std;

class Dog {
   private:
    int *pWeight;
    int *pAge;

   public:
    Dog() {
        cout << "생성자 호출\n";
        pAge = new int;
        *pAge = 1;

        pWeight = new int;
        *pWeight = 10;
    }

    ~Dog() {
        cout << "소멸자 호출\n";
        delete pAge;
        delete pWeight;
    }

    void setAge(int age) { *this->pAge = age; }

    int getAge() { return *pAge; }

    void setWeight(int weight) { *this->pWeight = weight; }

    int getWeight() { return *pWeight; }
};

int main() {
    Dog *pDog = new Dog;

    cout << "강아지의 나이: " << pDog->getAge() << "\n";
    cout << "강아지의 나이: " << (*pDog).getAge() << "\n";

    pDog->setAge(5);

    cout << "강아지의 나이: " << pDog->getAge() << "\n";

    delete pDog;

    return 0;
}
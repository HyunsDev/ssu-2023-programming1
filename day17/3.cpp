#include <iostream>
#include <string>

using namespace std;

class Rectangle {
   public:
    int width;
    int height;

    int getArea() { return width * height; }
};

int main() {
    Rectangle obj;

    obj.width = 3;
    obj.height = 4;
    cout << obj.width * obj.height << endl;

    int area = obj.getArea();
    cout << area << endl;

    return 0;
}

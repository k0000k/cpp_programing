#include <iostream>

using namespace std;

class Rectangle {
public:
    int h, w;
    int calcArea();
};

int Rectangle::calcArea() {
    return h * w;
}

int main()
{
    Rectangle rect;

    cin >> rect.h;
    cin >> rect.w;

    int area = rect.calcArea();

    cout << "사각형의 넓이는" << area << endl;

    return 0;
}

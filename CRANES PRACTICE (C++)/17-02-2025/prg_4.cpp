#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, breadth;

public:
    void setDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    inline double area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions();
    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
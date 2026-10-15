// Q2. Create a class Area with overloaded calculate() functions to calculate the
// area of a square, rectangle, and circle.

#include <iostream>
using namespace std;

class Area{
    public:
        void calculate(int side){
            cout << "Area of Square: " << side * side << endl;
        }
        void calculate(double length, double breadth){
            cout << "Area of Rectangle: " << length * breadth << endl;
        }
        void calculate(double radius){
            cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
        }
};

int main(){
    Area obj;
    obj.calculate(12);
    obj.calculate(13.5, 4.6);
    obj.calculate(4.8);
    return 0;
}
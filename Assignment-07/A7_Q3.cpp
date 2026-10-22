// 3. Create a base class Shape with a virtual function area(). Derive classes
// Rectangle and Circle that override area() to calculate and display their
// respective areas. Demonstrate runtime polymorphism using a base-class
// pointer.

#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void area(){}
};

class Rectangle{
    private:
        double length, breadth;
    public:
        Rectangle(double a, double b) : length(a), breadth(b) {}
        void area(){
            cout << "Area of Rectangle: " << length * breadth << endl;
        }
};

class Circle{
    private:
        double radius;
    public:
        Circle(double a) : radius(a) {}
        void area(){
            cout << "Area of Circle: " << 2.0 * 3.14 * radius << endl;
        }
};

int main(){
    Rectangle obj1(2.3, 7.9);
    Circle obj2(6.8);
    obj1.area();
    obj2.area();
    return 0;
}
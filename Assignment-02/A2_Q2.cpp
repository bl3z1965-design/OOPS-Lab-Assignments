// 2. Create a class Rectangle having data members length and breadth. Use a
// parameterized constructor to initialize the values and display the area of the
// rectangle.

#include <iostream>
using namespace std;

class rectangle{
    private:
        float length, breadth;
    
    public:
        rectangle(float l, float b) : length(l), breadth(b){}

        void display() {
            cout << "Area of Rectangele: " << length * breadth << " square units" << endl;
        }
};

int main() {
    rectangle r(3.6,4.8);
    r.display();
}
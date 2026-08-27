// 4. Create a class Box with data members length, width, and height. Implement:
//  a default constructor,
//  a parameterized constructor,
//  a function to calculate and display volume.

#include <iostream>
using namespace std;

class Box{
    private:
        float length, breadth, height;
    
    public:
        Box(){
            length = 1;
            breadth = 1;
            height = 1;
        }
        Box(float l, float b, float h) : length(l), breadth(b), height(h){}

        void display() {
            cout << "Area of Rectangele: " << length * breadth << " cubic units" << endl;
        }
};

int main() {
    Box r1, r2(3.6, 4.8, 6.9);
    r1.display();
    r2.display();
}
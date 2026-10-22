// 1. Create a base class with a function show() that prints "Current month is
// October". Create a derived class that overrides the show() function to print
// "Next month will be November". Create objects of both classes and call
// their functions.

#include <iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout << "Current month is October" << endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            cout << "Next month will be November" << endl;
        }
};

int main(){
    Base obj1;
    Derived obj2;
    obj1.show();
    obj2.show();
    return 0;
}
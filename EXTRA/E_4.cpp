// Write a program that uses the this pointer to print the address of the current object.

#include <iostream>
using namespace std;

class A{
    public:
        void display_ptr(){
            cout << "Pointer of the object: " << this;
        }
};

int main(){
    A obj;
    obj.display_ptr();
    return 0;
}
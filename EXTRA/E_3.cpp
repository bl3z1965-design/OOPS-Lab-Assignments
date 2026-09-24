// Use a pointer to a class object to call its member functions.
#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout << "Hello World!";
        }
};

int main(){
    A obj;
    A* ptr = &obj;
    ptr->display();
    return 0;
}
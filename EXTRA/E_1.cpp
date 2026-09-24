// Write a program to add two objects of different classes using a friend function.
#include <iostream>
using namespace std;

class B;

class A{
    private:
        int a;
    
    public:
        A(int x): a(x) {}
        friend int addition(A &obj1, B &obj2);
};

class B{
    private:
        int b;
    
    public:
        B(int y): b(y) {}
        friend int addition(A &obj1, B &obj2);
};

int addition(A &obj1, B &obj2){
    return (obj1.a + obj2.b);
}

int main(){
    A obj1(10);
    B obj2(20);
    cout << "Sum: " << addition(obj1, obj2);
    return 0;
}
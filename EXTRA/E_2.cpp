// Create a friend class that can access private members of another class and display them.
#include <iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(int x) : a(x) {}
        friend class B;
};

class B{
    private:
        int b;
    public:
        B(int y) : b(y) {}
        int addition(A &obj){
            return (obj.a + b);
        }
};

int main(){
    A obj1(10);
    B obj2(20);
    cout << "Sum: " << obj2.addition(obj1);
}
#include <iostream>
using namespace std;

class A{
    int a;
    public:
        A() : a(0) {}
        A(int n) : a(n) {}
        void display(){
            cout << a << endl;
        }
};

int main(){
    A obj[3];
    for(int i = 0; i < 3; i++){
        obj[i].display();
    }
    A obj2[2] = {A(1), A(3)};
    for(int i = 0; i < 2; i++){
        obj2[i].display();
    }
    return 0;
}
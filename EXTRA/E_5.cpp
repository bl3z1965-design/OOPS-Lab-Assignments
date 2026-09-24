// Allocate an array of objects dynamically and delete it.

#include <iostream>
using namespace std;

class A{
    public:
        int a;
        void display(){
            cout << "Number: " << a << endl;
        }
};

int main(){
    int size = 3;
    A* obj = new A[size];

    obj[0].a = 10;
    obj[1].a = 20;
    obj[2].a = 30;

    obj[0].display();
    obj[1].display();
    obj[2].display();

    delete[] obj;
    
    return 0;
}
// 2. Create a class Number with an integer data member value. Overload the
// unary -- operator to decrease the value of the object by 1. Display the value
// before and after applying the operator.

#include <iostream>
using namespace std;

class Counter{
    private:
        int number;
    public:
        Counter(int a) : number(a) {}
        void operator--(){
            --number;
        }
        void display(){
            cout << "Counter: " << number << endl;
        }
};

int main(){
    Counter obj(10);
    obj.display();
    --obj;
    obj.display();
    return 0;
}
// 1. Create a class Counter with an integer data member count. Overload the
// unary ++ operator to increase the value of count by 1. Create an object
// and display its value before and after applying ++.

#include <iostream>
using namespace std;

class Counter{
    private:
        int number;
    public:
        Counter(int a) : number(a) {}
        void operator++(){
            ++number;
        }
        void display(){
            cout << "Counter: " << number << endl;
        }
};

int main(){
    Counter obj(10);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}
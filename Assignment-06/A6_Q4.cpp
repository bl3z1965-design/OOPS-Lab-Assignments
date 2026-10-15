// 4. Create a class Number containing an integer data member. Create two objects
// and overload the following operators:
// ∙ + to add the values.
// ∙ - to subtract the values.
// Display the results of both operations

#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        Number(int n) : num(n) {}
        void operator+(){
            +num;
        }
        void operator-(){
            -num;
        }
        void display(){
            cout << "Number: " << num << endl;
        }
};

int main(){
    Number obj1(-20), obj2(50);
    +obj1;
    -obj2;
    obj1.display();
    obj2.display();
    return 0;
}
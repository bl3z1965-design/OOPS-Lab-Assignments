// 3. Create a class Number containing an integer data member value. Create two
// objects and overload the binary + operator to add the values stored in the two
// objects. Display the result.

#include <iostream>
using namespace std;

class Number{
    private:
        int num;
    public:
        Number(int n) : num(n) {}
        int display(){
            return num;
        }
        Number operator+(const Number &obj){
            Number temp(0);
            temp.num = num + obj.num;
            return temp;
        }
};

int main(){
    Number obj1(47), obj2(34);
    Number obj3 = obj1 + obj2;
    cout << "Sum of " << obj1.display() << " and "<< obj2.display() << ": " << obj3.display() << endl;
    return 0;
}
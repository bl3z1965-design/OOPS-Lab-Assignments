// 5. Create a class Complex with two data members real and imaginary. Overload
// the + operator to add two complex number objects and display the resulting
// complex number.
// For example:
// First number = 3 + 4i
// Second number = 2 + 5i
// Result = 5 + 9i

#include <iostream>
using namespace std;

class Complex{
    private:
        double re, im;
    public:
        Complex(double a, double b) : re(a), im(b) {}
        Complex operator+(const Complex &obj){
            return Complex(re + obj.re,im + obj.im);
        }
        void display(){
            cout << re << (im < 0 ? " - " : " + ") << abs(im) << "i" << endl;
        }
};

int main(){
    Complex obj1(3, -4), obj2(2, 5), obj3(5, -9);

    cout << "First Number: ";
    obj1.display();
    cout << "Second Number: ";
    obj2.display();
    cout << "Third Number: ";
    obj3.display();

    Complex obj4 = obj1 + obj2;
    Complex obj5 = obj3 + obj4;

    cout << "Fourth Number(Sum of first and second number): ";
    obj4.display();
    cout << "Fifth Number(Sum of third and fourth number): ";
    obj5.display();

    return 0;
}
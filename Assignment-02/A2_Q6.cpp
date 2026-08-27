// 6. Create a class Complex with real and imaginary data members. Implement:
//  a default constructor,
//  a parameterized constructor,
//  a display function.

#include <iostream>
using namespace std;

class Complex{

    private:
        double real, imaginary;

    public:
        Complex(){
            real = 0;
            imaginary = 0;
        }

        Complex(double r, double i) : real(r), imaginary(i){}

        void display(){
            if(imaginary >= 0)
                cout << real << " + " << imaginary << "i" << endl;
            else
                cout << real << " - " << -imaginary << "i" << endl;
        }
};

int main(){

    Complex c1, c2(4.6, -7.8);
    c1.display();
    c2.display();

    return 0;
}
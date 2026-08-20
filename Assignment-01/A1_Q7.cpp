// 7. Define a class named Complex with properties (real and imaginary) and methods as
// per following details.
// void set () to initialize object values.
// void display () to display complex number.
// Complex sum (Complex) or void sum (Complex) to add two complex numbers
// (objects of Complex class) and return complex_number (object of Complex
// class) as result.
// Properties (real and imaginary) of the code should have private access modifier and
// member functions should have public access modifier in C++ class.

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

        void set(){
            cout << "Enter the real and imaginary values: ";
            cin >> real >> imaginary;
        }
        
        Complex sum(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }

        void display(){
            if(imaginary >= 0)
                cout << real << " + " << imaginary << "i" << endl;
            else
                cout << real << " - " << -imaginary << "i" << endl;
        }

};

int main(){

    Complex c1, c2, c3;

    cout << "First Complex Number" << endl;
    c1.set();
    c1.display();
    
    cout << "Second Complex Number" << endl;
    c2.set();
    c2.display();

    cout << "Sum: ";
    c3 = c1.sum(c2);
    c3.display();

    return 0;
}
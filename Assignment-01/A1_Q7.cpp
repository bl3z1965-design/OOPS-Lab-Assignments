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
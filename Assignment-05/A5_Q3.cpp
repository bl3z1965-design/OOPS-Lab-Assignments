// Q3. Calculate Sum
// Create a class Calculator with overloaded functions named
// sum(): ∙sum(int a, int b) — calculate the sum of two integers.
// ∙sum(int a, int b, int c) — calculate the sum of three integers. ∙
// sum(double a, double b) — calculate the sum of two decimal numbers.
// Demonstrate all three overloaded functions using an object of the class

#include <iostream>
using namespace std;

class Calculator{
    public:
        void sum(int a, int b){
            cout << "Sum of two integer numbers " << a << ", " << b <<": " << a+b << endl;
        }
        void sum(int a, int b, int c){
            cout << "Sum of three integer numbers " << a << ", " << b << ", " << c <<": " << a+b << endl;
        }
        void sum(double a, double b){
            cout << "Sum of two decimal numbers " << a << ", " << b <<": " << a+b << endl;
        }
};

int main(){
    Calculator obj;
    obj.sum(56, 78);
    obj.sum(56, 78, 99);
    obj.sum(34.67, 29.08);
    return 0;
}
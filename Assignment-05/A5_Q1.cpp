// Q1. Create a class Print with overloaded display() functions to display an
// integer, a double value, and a string.
#include <iostream>
using namespace std;

class Print{
    public:
        void display(int n){
            cout << "Calling display(int n)" << endl;
            cout << "Integer: " << n << endl;
        }
        void display(double d){
            cout << "Calling display(double d)" << endl;
            cout << "Double: " << d << endl;
        }
        void display(string str){
            cout << "Calling display(string str)" << endl;
            cout << "String: " << str << endl;
        }
};

int main(){
    Print obj;
    obj.display(39);
    obj.display(98.56);
    obj.display("Hello Everybody");
    return 0;
}
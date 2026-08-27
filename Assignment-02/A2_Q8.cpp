// 8. Write a C++ program to demonstrate the execution order of constructors and
// destructors when objects are created inside main() and inside a separate function.

#include <iostream>
#include <string>
using namespace std;

class Demo{
    private:
        string name;
    public:
        Demo(string n) : name(n){
            cout << "Constructor Called inside " << name << endl;
        }
        ~Demo(){
            cout << "Destructor Called inside " << name << endl;
        }

        void function(){
            Demo d2("separate function"), d3("separate function");
        }
};

int main(){
    Demo d1("main function");
    d1.function();
    Demo d4("main function");
    return 0;
}
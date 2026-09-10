// 5. Create a base class College with a constructor that initializes the
// College Name. Create a derived class Department with a
// constructor that initializes the Department Name.
// Create an object of the derived class and display both college and
// department information to show the order of constructor execution.

#include <iostream>
#include <string>
using namespace std;

class College{

    protected:
        string Name;
        College(string n) : Name(n) { cout << "Base Class Constructor" << endl; }

};

class Department : public College{

    private:
        string Department_Name;

    public:
        Department(string n, string d) : College(n), Department_Name(d) { cout << "Derived Class Constructor" << endl; }

        void display(){

            cout << "College Name: " << Name << endl;
            cout << "Department Name: " << Department_Name << endl;

        }
};

int main(){

    Department d1("Thapar", "CSE");
    d1.display();
    return 0;

}
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
        College(string n) : Name(n) {}

};

// 2. Create a C++ program to demonstrate Multilevel
// Inheritance. Create three classes:
// Person → stores Name
// Employee → stores Employee ID
// Manager → stores Department
// Derive Employee from Person and Manager from Employee. Display
// all the details of the manager.

#include <iostream>
#include <string>
using namespace std;

class Person{

    protected:
        string Name;

};

class Employee : public Person{

    protected:
        int Employee_ID;

};

class Manager : public Employee{

    private:
        string Department;

    public:
        void accept(){

            cout << "Enter Name: ";
            cin >> Name;
            
            cout << "Enter Employee ID: ";
            cin >> Employee_ID;
            
            cout << "Enter Department: ";
            cin >> Department;

            cout << endl;
        }
        
        void display(){
            
            cout << "Name: " << Name << endl;
            cout << "Age: " << Employee_ID << endl;
            cout << "Roll Number: " << Department << endl;
        
        }

};

int main(){

    Manager m1;
    
    m1.accept();
    m1.display();

    return 0;

}
// 1. Create a C++ program to demonstrate Single Inheritance. 
// Create a base class Person with the following data members: 
// Name 
// Age 
// Create a derived class Student having: 
// Roll Number 
// Course 
// Implement member functions to accept and display the complete details of a student using inheritance.

#include <iostream>
#include <string>
using namespace std;

class Person{

    protected:
        string Name;
        int Age;

};

class Student : public Person{

    private:
        int Roll_Number;
        string Course;

    public:

        void accept(){

            cout << "Enter Name: ";
            cin >> Name;
            
            cout << "Enter Age: ";
            cin >> Age;
            
            cout << "Enter Roll Number: ";
            cin >> Roll_Number;
            
            cout << "Enter Course: ";
            cin >> Course;
            
            cout << endl;
        }
        void display(){
            
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Roll Number: " << Roll_Number << endl;
            cout << "Course: " << Course << endl;
        
        }
};

int main(){

    Student s1;
    
    s1.accept();
    s1.display();
    
    return 0;
}
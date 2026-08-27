// 1. Write a C++ program to create a class Student with data members name and
// rollNo. Use a default constructor to initialize these values and display the
// student details.

#include <iostream>
#include <string>
using namespace std;

class Student{
    
    private:

        string name;
        int rollNo;

    public:

        Student(){
            name = "Default";
            rollNo = 0;
        }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main(){

    Student s;
    s.display();

    return 0;
}
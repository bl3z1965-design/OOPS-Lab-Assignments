// 5. Write a program to demonstrate constructor overloading using a class Student. Create:
//  a default constructor,
//  a constructor accepting name and roll number,
//  a constructor accepting name, roll number, and CGPA.
// Display the details of objects created using all three constructors.

#include <iostream>
#include <string>
using namespace std;

class Student{
    
    private:

        string name;
        int rollNo;
        float CGPA;

    public:

        Student(){
            name = "Default";
            rollNo = 0;
            CGPA = 0;
        }

        Student(string n, int r) : name(n), rollNo(r){}

        Student(string n, int r, float c) : name(n), rollNo(r), CGPA(c){}

    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main(){

    Student s1, s2("Tushar", 31), s3("Tushar Thakur", 42, 9.1);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
// 1. Create a class Student with private data members name and marks.
// Write a friend function to access and display these private data members.

#include <iostream>
using namespace std;

class Student{

    private:

        string name;
        float marks;

        friend void display(Student &obj);

    public:

    Student(){
        name = "Default";
        marks = 0;
    }
};

void display(Student &obj){
    cout << "Name: " << obj.name << endl;
    cout << "Marks: " << obj.marks << endl;
}

int main(){
    Student s;
    display(s);
}
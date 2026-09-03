// 2. Create a class Number with two private data members a and b. Use a friend
// function to access these members and calculate and display their sum.

#include <iostream>
using namespace std;

class Student{

    private:

        int a, b;

        friend void display(Student &obj);

    public:

    Student(){
        a = 10;
        b = 20;
    }
};

void display(Student &obj){
    int c = obj.a + obj.b;
    cout << obj.a << " + " << obj.b << " = " << c << endl;;
}

int main(){
    Student s;
    display(s);
}
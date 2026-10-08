#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    student(string n, int a): name(n), age(a){}
    void print() {
        cout << name << " " << age << endl;
    }
};

class ABC : public student {
public:
    ABC(string n, int a) : student(n,a){}
};

int main() {
    ABC s("Student1", 21);
    s.print();
    return 0;
}
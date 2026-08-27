// 3. Write a C++ program to create a class Employee with data members name, id, and salary.
// Initialize the data members using a parameterized constructor and display the employee
// details.

#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int id;
        float salary;
    
    public:
        Employee(string n, int i, float s) : name(n), id(i), salary(s) {}

        void display() {
            cout << "Name " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Salary: " << fixed << salary << endl;
        }
};

int main() {
    Employee emp("Tushar Thakur", 10, 1299900.00);
    emp.display();
}
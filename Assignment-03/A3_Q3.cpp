// 3. Create a class Employee with a private data member salary. Create two objects
// and use a friend function to compare their salaries and display the higher
// salary.

#include <iostream>
using namespace std;

class Employee{
    private:
        float salary;

        friend void compare(Employee &emp1, Employee &emp2);

    public:
        Employee(float s) : salary(s){}
};

void compare(Employee &emp1, Employee &emp2){
    float high = emp1.salary > emp2.salary ? emp1.salary : emp2.salary;
    cout << "Higher salary: " << high << endl;
}

int main(){

    Employee employee1(12000), employee2(15000);
    compare(employee1, employee2);
    return 0;
}
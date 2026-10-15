// 6. Create a class Student with a data member CGPA. Create two student objects
// and overload the following relational operators:
// ∙ == to check whether both students have the same CGPA.
// ∙ > to check which student has the higher CGPA.
// Display an appropriate message based on the comparison.

#include <iostream>
using namespace std;

class Student{
    private:
        double CGPA;
    public:
        Student(double c) : CGPA(c) {}
        bool operator==(const Student &obj) const{
            return (CGPA == obj.CGPA);
        }
        bool operator>(const Student &obj){
            return (CGPA > obj.CGPA);
        }
};

int main(){
    Student obj1(10.0), obj2(10.0), obj3(9.7);
    if(obj1 == obj2)
        cout << "Both student have same CGPA" << endl;
    else
        cout << "No both student do not have same CGPA" << endl;
    if(obj1 > obj3)
        cout << "First student has a higher CGPA" << endl;
    else
        cout << "Second student has a higher or equal CGPA" << endl;
    return 0;
}
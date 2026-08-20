// 6. Create a code snippet that illustrates the following:
// a. Calling of private member functions inside public member function
// b. Access private member functions inside public member function

#include <iostream>
#include <string>
using namespace std;

class student{

    private:

        string Name;
        int RollNo;
        string Degree;
        string Hostel;
        float CurrentCgpa;

        void addDetails(){

            cout << "Enter Student Details:" << endl;

            cout << "Enter the student's Name: ";
            getline(cin >> ws, Name);

            cout << "Enter the student's roll number: ";
            cin >> RollNo;

            cout << "Enter the student's Degree: ";
            getline(cin >> ws, Degree);

            cout << "Enter the student's Hostel: ";
            getline(cin >> ws, Hostel);

            cout << "Enter the student's CGPA: ";
            cin >> CurrentCgpa;

            cout << endl;
        }
        
    public:

        void displayDetails(){
            
            addDetails();

            cout << "Displaying Details:" << endl;

            cout << "Student's Name: " << Name << endl;
            cout << "Student's Roll Number: " << RollNo << endl;
            cout << "Student's Degree: " << Degree << endl;
            cout << "Student's Hostel: " << Hostel << endl;
            cout << "Student's CGPA: " << CurrentCgpa << endl;
            
            cout << endl;
        }
};

int main(){
    
    student s1;
    
    s1.displayDetails();
    
    return 0;
}
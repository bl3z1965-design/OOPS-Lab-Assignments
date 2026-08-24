// 5. Differentiate between private and public access/scope. Perform the question no. 4
// with class instead of structure with having the data members private and some
// member functions in private scope and some in public scope.

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

    public:

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
        
        void updateDetails(){
            cout << "Update Student Details:" << endl;

            cout << "Update student's Name: ";
            getline(cin >> ws, Name);

            cout << "Update student's roll number: ";
            cin >> RollNo;
            
            cout << "Update student's Degree: ";
            getline(cin >> ws, Degree);
            
            cout << endl;
        }

        void updateCGPA(){
            cout << "Update Student CGPA:" << endl;

            cout << "Update student's CGPA: ";
            cin >> CurrentCgpa;
            
            cout << endl;
        }

        void updateHostel(){
            cout << "Update Student Hostel:" << endl;

            cout << "Update student's Hostel: ";
            getline(cin >> ws, Hostel);
            
            cout << endl;
        }

        void displayDetails(){
            
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
    
    s1.addDetails();
    s1.displayDetails();
    
    s1.updateDetails();
    s1.updateHostel();    
    s1.updateCGPA();
    s1.displayDetails();
    
    return 0;
}
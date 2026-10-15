// Q4. Create a class with overloaded result() functions to display marks in one
// subject, calculate the average of two subjects, and calculate the average of three
// subjects.

#include <iostream>
using namespace std;

class Marks{
    public:
        void result(double m1){
            cout << "Marks in 1 subject: " << m1 << endl;
        }
        void result(double m1, double m2){
            double Average = (m1 + m2) / 2.0;
            cout << "Average in 2 subjects: " << Average << endl; 
        }
        void result(double m1, double m2, double m3){
            double Average = (m1 + m2 + m3) / 3.0;
            cout << "Average in 3 subjects: " << Average << endl; 
        }
};

int main(){
    Marks obj;
    obj.result(34.5);
    obj.result(39.6, 48.2);
    obj.result(39.6, 48.2, 44.5);
    return 0;
}
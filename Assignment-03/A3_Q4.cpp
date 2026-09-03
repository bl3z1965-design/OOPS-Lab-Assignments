// 4. Create a class Student with a static data member to keep track of the number of
// objects created. Create three objects and display the total number of objects.

#include <iostream>
using namespace std;

class Count{
    private:
        static int counter;

    public:
        Count(){
            counter++;
        }
        
        void display(){
            cout << "Number of objects: " << counter << endl;
        }
};

int Count::counter = 0;

int main(){
    Count c1, c2, c3;
    c1.display();
    Count c4, c5;
    c1.display();
}
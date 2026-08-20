// 8. Implement namespace in a program to illustrate the use of same name variables and
// functions in different sections/libraries of the code.

#include <iostream>
using namespace std;

namespace firstSequence{
    int x = 10;
    void display(){
        cout << "Initiating the first sequence of opertions: " << endl << "Value of x: " << x << endl;
    }
}

namespace secondSequence{
    int x = 20;
    void display(){
        cout << "Initiating the second sequence of opertions: " << endl << "Value of x: " << x << endl;
    }
}

int main(){

    firstSequence::display();
    secondSequence::display();

    return 0;
}
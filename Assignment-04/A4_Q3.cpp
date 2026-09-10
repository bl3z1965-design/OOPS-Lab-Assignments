// 3. Create a C++ program to demonstrate Multiple Inheritance.
// Create two base classes:
// Academic → stores Marks
// Sports → stores Sports Score
// Create a derived class Result that inherits from both classes and
// calculates the total score and displays the result.

#include <iostream>
#include <string>
using namespace std;

class Academic{

    protected:
        float Marks;

};

class Sports{

    protected:
        float Sports_Score;

};

class Result : public Academic, public Sports{

    private:
        float Total_Score;

    public:
        void accept(){

            cout << "Enter Academic Marks: ";
            cin >> Marks;
            
            cout << "Enter Sports Score: ";
            cin >> Sports_Score;

            cout << endl;

        }

        void display(){
            
            Total_Score = Marks + Sports_Score;
            cout << "Total Score: " << Total_Score << endl;
            
        }

};

int main(){

    Result m1;
    
    m1.accept();
    m1.display();

    return 0;

}
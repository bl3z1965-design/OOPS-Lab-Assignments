// 4. Create a C++ program to demonstrate Hierarchical
// Inheritance. Create a base class Vehicle containing:
// Brand
// Model
// Create two derived classes:
// Car → Number of Doors
// Bike → Engine Capacity
// Create separate objects of Car and Bike and display their respective
// details.

#include <iostream>
#include <string>
using namespace std;

class Vehicle{

    protected:
        string Brand;
        string Model;

};

class Car : public Vehicle{

    private:
        int Number_of_Doors;

    public:
    public:
        void accept(){

            cout << "Enter Car Brand: ";
            cin >> Brand;
            
            cout << "Enter Car Model: ";
            cin >> Model;
            
            cout << "Enter Number of Doors: ";
            cin >> Number_of_Doors;

            cout << endl;
        }
        
        void display(){
            
            cout << "Car Brand: " << Brand << endl;
            cout << "Car Model: " << Model << endl;
            cout << "Number of Doors: " << Number_of_Doors << endl;
        
        }
};

class Bike : public Vehicle{

    private:
        int Engine_Capacity;

    public:
    public:
        void accept(){

            cout << endl;

            cout << "Enter Bike Brand: ";
            cin >> Brand;
            
            cout << "Enter Bike Model: ";
            cin >> Model;
            
            cout << "Enter Engine Capacity: ";
            cin >> Engine_Capacity;

            cout << endl;
        }
        
        void display(){
            
            cout << "BikeBrand: " << Brand << endl;
            cout << "Bike Model: " << Model << endl;
            cout << "Engine Capacity: " << Engine_Capacity  << "cc"<< endl;
        
        }
};

int main(){

    Car c1;
    
    c1.accept();
    c1.display();

    Bike b1;

    b1.accept();
    b1.display();

    return 0;

}
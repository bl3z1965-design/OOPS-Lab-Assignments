// 2. Create a base class Animal with a virtual function sound(). Derive classes
// Dog and Cat that override sound() to display their respective sounds. Call
// the functions using base-class pointers.

#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound(){}
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "Dog Barks" << endl;
        }
};

class Cat : public Animal{
    public:
        void sound(){
            cout << "Cat Meows" << endl;
        }
};

int main(){
    Dog obj1;
    Cat obj2;
    obj1.sound();
    obj2.sound();
    return 0;
}
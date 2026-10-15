#include <iostream>
using namespace std;

class Base{
    private:
        const int i;
        int j;
    public:
        Base() : i(1) {}
        void set(int value){
            j = value;
        }
        void display() const{
            cout << i << "\t" << j;
        }
};

int main(){
    Base b1;
    b1.set(20);
    b1.display();
}
#include <iostream>
using namespace std;

class book{
    private:
        string name;
        int year;
    public:
        book(string n, int y) : name(n), year(y){}
        void modifybyvalue(book b){
            b.year = 2000;
            cout << b.year << endl;
        }
        void modifybyreference(book &b){
            b.year = 2025;
            cout << b.year << endl;
        }
        void modifybypointer(book *b){
            b->year = 2026;
            cout << b->year << endl;
        }
        void display(){
            cout << year << endl;
        }
};

int main(){
    book b("Good", 2020);
    b.display();
    b.modifybyvalue(b);
    b.display();
    b.modifybyreference(b);
    b.display();
    b.modifybypointer(&b);
    b.display();
}
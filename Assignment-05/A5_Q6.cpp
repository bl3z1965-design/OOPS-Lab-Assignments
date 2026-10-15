// Q6. Shopping Bill Generator
// Create a class Bill with overloaded functions named calculateBill() to
// calculate: ∙ The bill for one item using quantity and unit price.
// ∙ The bill for two items using their quantities and prices.
// ∙ The bill for a bill amount after applying a discount percentage.
// Use suitable parameter lists and return the final bill amount.

#include <iostream>
using namespace std;

class Bill{
    public:
        void calculateBill(int quantity, double price){
            cout << "Bill for 1 item: " << quantity * price << endl;
        }
        void calculateBill(int q1, double p1, int q2, double p2){
            cout << "Bill for 2 items: " << q1*p2 + q2*p2 << endl;
        }
        void calculateBill(double bill, double discount){
            cout << "Discounted Bill: " << bill * (100.0 - discount) / 100.0 << endl;
        }
};

int main(){
    Bill obj;
    obj.calculateBill(5, 98.99);
    obj.calculateBill(6, 79.99, 3, 148.75);
    obj.calculateBill(1568.95, 22.5);
    return 0;
}
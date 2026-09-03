// 5. Create a class BankAccount with:
// Private data members:
//  accountNo
//  balance
// Static data member:
//  totalAccounts
// Implement:
//  A constructor to initialize the account details.
//  A friend function to display the private account details.
//  A static member function to display the total number of accounts created.
// Create at least three objects and demonstrate both the friend function and
// static member function.

#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accountNo;
        float balance;
        static int totalAccounts;

        friend void display(BankAccount &obj);

    public:
        BankAccount(int a, float b) : accountNo(a), balance(b) {totalAccounts++;}
        static void display_totalAccounts(){
            cout << "Total Accounts: " << totalAccounts << endl;
            cout << endl;
        }
};

int BankAccount::totalAccounts = 0;

void display(BankAccount &obj){
    cout << "Account Number: " << obj.accountNo << endl;
    cout << "Balance: " << obj.balance << endl;
    cout << endl;
}

int main(){
    BankAccount a1(123456789, 1298.68), a2(192837465, 6578.98);
    a1.display_totalAccounts();
    display(a1);
    display(a2);
    BankAccount a3(918273654, 6034.77);
    a1.display_totalAccounts();
    display(a3);
}
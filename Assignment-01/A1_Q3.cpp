// 3. WAP to demonstrate for, while, do-while (with all possible variations), like for loop
// can be demonstrated without giving initialization in for construct or without giving
// increment in for construct.
// Sample:
// for (int i=0; i<10; i++)
// i=0
// for (; i<10; i++)
// i=0
// for (; i<10;)
// i++

#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;

    int i = 1;
    for(;i <= 10; i++){
        cout << i << " ";
    }
    cout << endl;

    i = 1;
    for(;i <= 10;){
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 1;
    while(i <= 10){
        cout << i << " ";
        i++;
    }
    cout << endl;

    i = 1;
    do{
        cout << i << " ";
        i++;
    }while(i <= 10);
    cout << endl;

    return 0;
}
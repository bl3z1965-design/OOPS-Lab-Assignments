// 2. Write a C++ program that will ask for a temperature in Celsius and display it in
// degree Fahrenheit.[F=9C/5+32]

#include <iostream>
using namespace std;

int main(){

    float celcius, fahrenheit;

    cout << "Enter the temperature in Celcius: ";
    cin >> celcius;

    fahrenheit = (9 * celcius / 5) + 32;

    cout << celcius << " degree Celcius = " << fahrenheit << " degree Fahrenheit" << endl;

    return 0;
}
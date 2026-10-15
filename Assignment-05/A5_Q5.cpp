// Q5. Find the Maximum (Moderate)
// Create a class Maximum with overloaded functions named
// findMax(): ∙ findMax(int a, int b) — find the greater of two integers.
// ∙ findMax(int a, int b, int c) — find the greatest of three integers. ∙
// findMax(double a, double b) — find the greater of two decimal numbers.

#include <iostream>
using namespace std;

class Maximum{
    public:
        int findMax(int a, int b){
            return (a>=b ? a : b);
        }
        int findMax(int a, int b, int c){
            return findMax(findMax(a,b),c);
        }
        double findMax(double a, double b){
            return (a>=b ? a : b);
        }
};

int main(){
    Maximum obj;
    cout << "Maximum of two integers: " << obj.findMax(5,7) << endl;
    cout << "Maximum of three integers: " << obj.findMax(34, 23, 89) << endl;
    cout << "Maximum of two decimals: " << obj.findMax(34.5, 34.7) << endl;
    return 0;
}
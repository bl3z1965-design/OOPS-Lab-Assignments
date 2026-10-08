#include <iostream>
using namespace std;

class DinamicArray{
    private:
        int *data;
        int row;
        int col;
    public:
        DinamicArray(int r, int c) : row(r), col(c){
            data = new int[row*col];
            for(int i = 0; i < (row); i++){
                for(int j = 0; j < col; j++){
                    data[i * col +j] = i * col + j + 1;
                }      
                cout << endl;          
            }
        }
        void display(){
            for(int i = 0; i < (row); i++){
                for(int j = 0; j < col; j++){
                    cout << data[i * col +j] << "\t";
                }      
                cout << endl;          
            }
        }
        ~DinamicArray(){
            delete[] data;
        }
};
int main(){
    DinamicArray d1(9, 8);
    d1.display();
    return 0;
}
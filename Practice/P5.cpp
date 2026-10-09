#include <iostream>
#include <utility>
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
            }
        }
        DinamicArray(DinamicArray&& other) : data(other.data), row(other.row), col(other.col){
            other.data = nullptr;
            other.row = 0;
            other.col = 0;
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

DinamicArray createTemp(){
    DinamicArray temp(2,3);
    return temp;
}
int main(){
    DinamicArray d1(9, 8);
    DinamicArray d2 = move(d1);
    DinamicArray d3 = createTemp();
    d2.display();
    cout << endl;
    d3.display();
    return 0;
}
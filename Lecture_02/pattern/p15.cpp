#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin >> n;
    while(row<=n){
        int col = n+1-row;
        int space = n-col;
        while(space){
            cout << " ";
            space--;
        }
        while(col){
            cout << "*";
            col--;
        }
        cout << endl;
        row++;

    }
}
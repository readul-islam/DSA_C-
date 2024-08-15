/*
A B C D
E F G H
I J K L
*/

#include <iostream>
using namespace std;

int main(){
    int n, row = 1;
    cin >> n; 
    int count = 0;
    while(row<=n){
        int col = 1;
        while(col<=n){
            char  ch = 'A' + count;
            cout << ch << " ";
            count ++;
            col ++;
        }
        cout << endl;
        row++;
    }
}
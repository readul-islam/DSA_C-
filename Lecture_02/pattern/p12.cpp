/*
D
C D
B C D
A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int n, row = 1;

    cin >> n;
    while(row<=n){
        int col = 1;
        char start = 'A' + n - row;
        while(col<=row){
            cout << start << " ";
            start = start + 1;
            col ++;
        }
        cout << endl;
        row++;
    }
   
}
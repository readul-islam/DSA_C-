#include <iostream>
using namespace std;

/*
1 1 1
2 2 2 
3 3 3
*/
int main(){
    int c, r;
    cin >> c;
    cin >> r;

    int i = 1;
    while(i<= r){
        int j = 1;
        while(j<=c){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
#include <iostream>
using namespace std;

int main(){
    int c, r;
    cin >> r;
    cin >> c;

    int i = 1;
    while(i<=r){
        int j = 1;
        while(j<=c){
            cout << j << " ";
            j++;

        }
        cout << endl;
        i++;
    }
}
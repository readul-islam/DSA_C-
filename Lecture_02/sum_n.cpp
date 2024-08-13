#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter your sum input: ";
    cin >> a;

    int sum = 0;
    int i = 1;
    while(i<=a){
        sum += i;
        i++;
    }

    cout<< "Total sum of " << a << " = " << sum << endl;
}
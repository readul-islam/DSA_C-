#include<iostream>
using namespace std;


int main(){
    int nums[] = {1,12,-5,-6,50,3}, k = 4;
    int sum = 0;
    for(int x:nums){
       sum+=x;
    }
    cout << sum;
}
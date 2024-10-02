#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void print(int *p)
{
    // (*p)++;
    *p = *p + 1;
    // cout << p << endl;
    // cout << *p << endl;
};


int sum (int *arr , int n){
   int sum = 0;
    for(int i = 0; i < n; i++){
    sum+= arr[i];
    }
    return sum;
}

int main()
{

    /* write code here */
    int value = 5;
    int *p = &value;

    cout << "before value " << value << endl;
    print(p);
    cout << "after value " << value << endl;
    int arr [5] = {1,22, 33,3,4};
    cout << sum(arr, 5) << endl; 
    return 0;
};

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void bubbleSort(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    for(int i = 0; i < n-1;i++){
        if( arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort(arr, n-1);

}


int main()
{

int arr[5] = {5,4,3,2,1};
int n = 5;
bubbleSort(arr, n);
cout << arr[n-1] << endl;


    return 0;
};
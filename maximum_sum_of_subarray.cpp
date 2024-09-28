#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[7] = {10,20,30,40,200,400,800};
    int n = 7 ;
    int k;
    cout << "Enter length of subArray : ";
    cin >> k;


    if(k>n)
    cout <<  "Input invalid" << endl;
    int sum = 0; int Max = 0;

    // create first window sum result and update max;

    for(int i = 0; i< k;i++){
        sum+=arr[i];
    }
    Max = sum;
    // cout << sum << endl;

    for(int i =1; i<=n-k;i++){
        sum = sum - arr[i-1] + arr[i+k-1];
        
       Max= max(Max,sum);
       
    };

    cout << Max << endl;

}
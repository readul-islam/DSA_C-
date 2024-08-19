#include<iostream>
using namespace std;

int main(){
    int  nums[8] = {4,3,2,7,8,2,3,1};
    int size = 8;
    int ans = 0;
    for(int i =0; i<size; i++){
        ans = ans^nums[i];
       
    }

   for(int i = 1; i<=size; i++){
    ans = ans^i;
   }
    cout << ans << endl;
}
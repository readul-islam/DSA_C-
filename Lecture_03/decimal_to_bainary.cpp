#include<iostream>
using namespace std;
// 5 = 101
// ans = (bit * 10^i) + ans
int main(){
    int n;
    int i = 0;
    cin >> n;
    int ans = 0;
    while(n!=0){
        int bit = n&1;
        ans = (bit * std::pow(10, i)) + ans;
        i++;
        n = n>>1;


    }
    cout << ans << endl;

}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int power(int n, int pow){
    if(pow == 1)
        return n;

    return n * power(n, pow-1);
}

int main() {


int n, pow;

cin >> n >> pow;

int ans = power(n , pow);

cout << n << " to the power " << pow << " : " << ans << endl;
 /* write code here */


    return 0;
};
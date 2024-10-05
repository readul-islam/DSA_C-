#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// int power(int n, int pow){
//     if(pow == 1)
//         return n;

//     return n * power(n, pow-1);
// }
int power(int n, int p)
{
    // base case
    if (p == 0)
        return 1;
    if (p == 1)
        return n;
    // RECURSIVE CALL
    int ans = power(n, p / 2);
    // if n is even
    if (n % 2 == 0)
    {
        //(n^p/2) * (n^p/2)
        return ans * ans;
    }
    else
    {
        // if n is odd;
        // n* (n^p/2) * (n^p/2)
        return n * ans * ans;
    }
}
int main()
{

    int n, pow;

    cin >> n >> pow;

    int ans = power(n, pow);

    cout << n << " to the power " << pow << " : " << ans << endl;
    /* write code here */

    return 0;
};
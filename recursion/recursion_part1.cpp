#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int factorial(int n)
{
    // base case;
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1); // recursive  relation
    // 5 * 4 * 3 * 2 * 1 *1
}

int main()
{

    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    /* write code here */

    return 0;
};
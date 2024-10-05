#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int factorial(int n)
{
    // base condition;
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1); // recursive  relation
    // 5 * 4 * 3 * 2 * 1 *1
};


int power(int n , int pow){
    // base condition
    if(pow == 0){
        return 1;
    }

    return n * power(n , pow-1);// recursive  relation
}

int main()
{

    int n, p;
    cin >> n;
    cin >> p;

    int ans = factorial(n);
    cout <<"Factorial of " << n << ": " << ans << endl;
    int pr = power(n, p);
    cout <<n <<" the power " << p  << ": " << pr << endl;

    /* write code here */

    return 0;
};
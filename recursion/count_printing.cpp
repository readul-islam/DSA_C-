#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void printCounting(int n)
{
    if (n == 0)
    {
        return;
    };

    cout << n << " "; // tail recursion
    printCounting(n - 1);
    //   cout << n << " "; // head recursion
}

int main()
{
    int n;
    cin >> n;
    printCounting(n);
    cout << endl;
    /* write code here */

    return 0;
};
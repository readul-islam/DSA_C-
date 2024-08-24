#include <iostream>
using namespace std;
// 1 to n; all sum of 1 to n formula n*(n+1)/2;

int pivotInteger(int n)
{
    int sum = n * (n + 1) / 2;
    int x = sqrt(sum);
    if (x * x == sum)
    {
        return x;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    cout << pivotInteger(n) << endl;
}
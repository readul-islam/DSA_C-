#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = false;
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            isPrime = false;
        }
        else
        {
            isPrime = true;
        }
    }

    if (isPrime)
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // Sieve of Eratosthenes
    vector<int> prime(n + 1, true);
    // initialize 0,1 as a non prime
    prime[0] = prime[1] = false;
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;

            // false all unPrime number depending on prime;
            for (int j = j * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }

    /* write code here */

    return 0;
};
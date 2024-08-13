// take input n
// find sum of all even number which include in this n range

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Take input n: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }

    cout << "Total sum of even number = " << sum << endl;
}
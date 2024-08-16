/*
****
***
**
*
*/

/*
n - row+ 1
4 - 1+1 = 4
4-2+1 = 3
4-3+1=2
4-4+1= 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n, row = 1;
    cin >> n;
    while (row <= n)
    {
        int col = n + 1 - row;
        while (col)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
}
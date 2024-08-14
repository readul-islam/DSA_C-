#include <iostream>
using namespace std;
/*
 1
 2 2
 3 3 3
 * * * *
 * * * * *
 */
int main()
{
    int n;
    cin >> n;
    int count = 1;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            col++;
            count++;
        }
        cout << endl;
        row ++;
    }
}
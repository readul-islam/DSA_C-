/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include <iostream>
using namespace std;

int main()
{
    int n, row = 1;
    cin >> n;

    while (row <= n)
    {
        int col = n - row + 1;
        int star = n - col;
        int start = 1;
        while (start <= col)
        {
            cout << start;
            start++;
        }
        while (star)
        {
            cout << "*";
            star--;
        }

        int col1 = n - row + 1;
        int star1 = n - col1;

        while (star1)
        {
            cout << "*";
            star1--;
        }
        while (col1)
        {
            cout << col1;
            col1--;
        }

        cout << endl;
        row++;
    }
}
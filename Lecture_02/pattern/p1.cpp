/*
****
****
****
****
*/

#include <iostream>
using namespace std;

int main()
{
    int c, r;
    cin >> c ;
    cin >> r;
    int i = 1;

    while (i <= r)
    {
        int j = 1;
        while (j <= c)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}
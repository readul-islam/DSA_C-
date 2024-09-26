#include <iostream>
using namespace std;

void reverseWord(int start, int end, char s[])
{

    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

int main()
{
    char s[15] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    int n = 15;

    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }

    int start = 0, end = 0, swapT = 0;
    for (int i = 0; i <= n; i++)
    {
        if (isalnum(s[i]) == 1)
        {
            end = i;
        }
        if ((i == n) || (s[i] == ' '))
        {

            reverseWord(start, end, s);

            start = i + 1;
            end = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
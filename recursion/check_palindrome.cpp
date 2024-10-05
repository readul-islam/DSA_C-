#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPalindrome(string txt, int n, int i)
{
    
    if (i > n - i - 1)
    {
        return true;
    }

    if (txt[i] != txt[n - i - 1])
    {

        return false;
    }
    else
    {
        return checkPalindrome(txt, n, i + 1);
    }
}

int main()
{

    string txt;
    cin >> txt;

    bool ans = checkPalindrome(txt, txt.length(), 0);
    if (ans)
    {
        cout << "txt is palindrome" << endl;
    }
    else
    {
        cout << "txt is not palindrome" << endl;
    }
    /* write code here */
};
#include <iostream>
using namespace std;

void toLowerCase(string &s)
{
    // Traverse through the string s
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // Check if ch is a uppercase letter
        if (ch <= 'Z' && ch >= 'A')
        {
            ch = ch - 'A' + 'a';
            s[i] = ch;
        }
    }
}

string reverseString(string s)
{
    int len = s.length();

    for (int i = 0; i < len / 2; i++)
    {
        swap(s[i], s[len - i - 1]);
    }

    return s;
}
bool checkPalindrome()
{
    string s = "N oo kn";
    toLowerCase(s);
    string reversed = reverseString(s);

    int i = 0;
    int j = 0;
    int n = s.length();

    while (i < n && j < n)
    {
        if (isalnum(s[i]) == 0)
        {
            i++;
        }
        else if (isalnum(reversed[j]) == 0)
        {
            j++;
        }else if(s[i] == reversed[j]){
            i++;
            j++;
        }else{
            return false;
        }
    }
    return true;
}


int main(){
    cout << checkPalindrome() << endl;
}
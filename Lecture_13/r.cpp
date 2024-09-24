#include <iostream>
using namespace std;

int main()
{
    string s = "The sky is blue";

    // reverse string
    reverse(s.begin(), s.end());

    // initial three pointer
    int i = 0;          // iterator for s string;
    int n = s.length(); // length of string;
    int right = 0, left = 0;

    while (i < n)
    {
        while (i < n && s[i] == ' ')
        {
            i++;
        };
        if (i == n)
        {
            break;
        }
        while (i < n && s[i] != ' ')
        {
            cout << "Index: " << i << "| value: " << s[i] << endl;
            right++;
             i++;
            
        }
        reverse(s.begin() + left, s.begin() + right);
         
        s[right++] = ' ';
         
        left = right;
        i++;
    }
    s.resize(right - 1);
  

    cout << s << endl;
}
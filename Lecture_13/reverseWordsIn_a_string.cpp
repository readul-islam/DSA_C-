#include <iostream>
using namespace std;

int main()
{
    string s = "  hello world  ";
    string temp = "", ans = "";
    for (int i = 0; i <= s.length(); i++)
    {
        if (isalnum(s[i]))
        {
            temp += s[i];
        }
        else
        {
            if (!temp.empty())
            {
                if (ans.empty())
                {
                    ans = temp;
                }
                else
                {
                    ans = temp + " " + ans;
                }
                temp.clear();
            }
        }
      
    }
      cout << ans;
}
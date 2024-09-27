#include <iostream>
using namespace std;

int main()
{
    string s = "My name is Khan";
    // expected output : My@40name@40is@40Khan

    // solving in space complexity O(1)

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            string resolved = s.substr(0, i);

            string unresolved = s.substr(i + 1);
            s = resolved + "@40" + unresolved;
        }
    };

    cout << s.length() << endl;
}
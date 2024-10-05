#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

string reverse(string txt, int s, int e)
{
    if (s >= e)
        return txt;

    swap(txt[s], txt[e]);

    return reverse(txt, s + 1, e - 1);
}

int main()
{

    string txt;
    cin >> txt;
    int s = 0;
    int e = txt.length() - 1;

    string ans = reverse(txt, s, e);
    cout << endl << ans << endl;

    return 0;
};
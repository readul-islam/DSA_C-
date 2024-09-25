#include <iostream>
using namespace std;

int main()
{
    string s = "the sky is blue";


    int len = s.length() -1;
    int ans = 0;
    // skip leading or whitespace
    while(len>=0 && s[len] == ' '){
        len--;
    };
    // count letter until come whitespace

    while(len>=0 && s[len] != ' '){
        ans++;
        len--;
    }
    cout << ans << endl;
}
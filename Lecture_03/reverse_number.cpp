// 123 = 321
// ans = ans * 10 + digit;
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans << endl;
}
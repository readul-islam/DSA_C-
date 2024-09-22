#include <iostream>
using namespace std;

int length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrome(char name[], int len)
{
    bool isTrue = true;
    for (int i = 0; i <= len / 2; i++)
    {
        if (name[i] != name[len - i - 1])
        {
            isTrue = false;
        }
    }
    return isTrue;
}

int main()
{

    char name[20];
    cin >> name;
    int len = length(name);

    cout << checkPalindrome(name, len) << endl;
}
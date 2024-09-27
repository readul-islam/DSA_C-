#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

// check is array contains only zero or not
bool isArrayZero(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    };

    return true;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    int n = s1.length();
    int m = s2.length();

    // if s1 > s2 is true we cant find permutation
    if (n > m)
    {
        cout << false; // will be return
    }

    vector<int> fr1(26, 0);

    // store counting in fr1

    for (int i = 0; i < n; i++)
    {
        int index = s1[i] - 'a';
        fr1[index]++;
    }

    // create a window for s2;

    for (int i = 0; i < m; i++)
    {
        int index = s2[i] - 'a';
        fr1[index]--;

        if (i - n >= 0)
        {
            int omitIndex = s2[i - n] - 'a';
            fr1[omitIndex]++;
        }

        if (isArrayZero(fr1))
        {
            return true;
        }
    }
}

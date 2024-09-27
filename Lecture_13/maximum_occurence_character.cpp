#include <iostream>
#include <vector>
using namespace std;

void arrayOfCounter(vector<int> &letter, string s)
{
    int len = s.length();
    // create an array of count of characters
    for (int i = 0; i < len; i++)
    {
        char ch = s[i];
        // getting index number for sorting and counting a-z
        int index = ch - 'a';

        letter[index]++;
    };
};


int maximumOccOfChar(vector<int> &letter)
{
    int max = INT_MIN;
    int ans = 0;
    // find maximum occ character
    for (int j = 0; j < letter.size(); j++)
    {

        if (max < letter[j])
        {
            max = letter[j];
            ans = j;
        }
    }
    return ans;
}

int main()
{
    vector<int> letter(26, 0);

    string s = "there";
    

    arrayOfCounter(letter, s);
    int ans = maximumOccOfChar(letter);

    char finalAns = ans + 'a';

    cout << finalAns << endl;
}
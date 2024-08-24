/*
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> arr;
    int digits[3] = {1, 2, 3};
    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (sum * 10) + digits[i];
    }

    cout << sum << endl;

    sum = sum + 1;

    while (sum != 0)
    {
        int rem = sum % 10;
        cout << rem << endl;
        sum = sum / 10;
        arr.push_front(rem);
    }

    for (auto it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
}
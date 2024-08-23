/*
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.



Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.
*/

#include <iostream>
using namespace std;

char binarySearch(char arr[], int size, char target)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = arr[0];

    while (s <= e)
    {
        if (arr[mid] == target || (arr[mid]< target<arr[mid+1])  && mid < (size-2))
        {
            ans = arr[mid + 1];
            return ans;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    char arr[3] = {'c', 'f', 'j'};
    int size = 3;

    cout << binarySearch(arr, size, 'e') << endl;
}
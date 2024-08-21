/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
*/

#include <iostream>
using namespace std;

int findPeakEle(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    // you can return mid or start
    return start;
}

int main()
{
    int arr[7] = {1,2, 3, 5, 2, 1,0};
    int size = 7;
    cout << findPeakEle(arr, size) << endl;
}
/*
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.

Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1.
2. 'arr' may contain duplicate elements.
*/

#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        if (key>arr[mid])
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
    int key;
    cin >> key;
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3};
    int size = 10;

    // cout << firstOcc(arr, size, key) << endl;
    cout << lastOcc(arr, size, key) << endl;
}
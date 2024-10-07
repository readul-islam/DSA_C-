#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void marge(int *arr, int mid, int start, int end)
{
    // save main array index first;
    int mainArrayFIndex = start;
    int arr1Start = start;

    while (arr1Start <= mid)
    {
        int arr2Start = mid + 1;
        while (arr2Start <= end)
        {
            if (arr[arr2Start] < arr[arr1Start])
            {
                swap(arr[arr1Start], arr[arr2Start]);
                arr2Start++;
            }
            else
            {
                arr2Start++;
            }
        }
        arr1Start++;
    }
}

void margeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    };

    int mid = start + (end - start) / 2;

    // recursive call for first divided array;
    margeSort(arr, start, mid);
    // recursive call for last divide array;
    margeSort(arr, mid + 1, end);
    marge(arr, mid, start, end);
}

int main()
{

    /* write code here */
    int arr[8] = {10, 4,4, 8, 20, 16, 27, 90};
    int n = 8;

    margeSort(arr, 0, n - 1);
    print(arr, n);

    return 0;
};
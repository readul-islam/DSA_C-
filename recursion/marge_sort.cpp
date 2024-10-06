#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void marge(int *arr, int start, int end)
{

    int mid = start + (end - start) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    // coping element
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainIndex = start;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainIndex++];
    };

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainIndex++];
    }
    //
    int i = 0;
    int j = 0;
    mainIndex = start;
    while (i < len1 && j < len2)

    {
        if (arr1[i] < arr2[j])
        {
            arr[mainIndex++] = arr1[i++];
        }
        else
        {
            arr[mainIndex++] = arr2[j++];
        }
    }

    while (i < len1)
    {
        arr[mainIndex++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[mainIndex++] = arr2[j++];
    }
}

void margeSort(int *arr, int start, int end)
{
    // base case;
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;
    // for 1st divide array;
    margeSort(arr, start, mid);
    // for 2nd divided array;
    margeSort(arr, mid + 1, end);

    marge(arr, start, end);
}

int main()
{
    int arr[10] = {45, 66, 7, 8, 6, 32, 7, 8, 10, 20};
    int n = 10;

    margeSort(arr, 0, n - 1);
    /* write code here */
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
};
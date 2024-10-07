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

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    print(arr, e + 1);
    int count = 0;
    // how many number small than pivot count it
    int i = s + 1;

    while (i <= e)
    {
        if (arr[i] < pivot)
        {
            count++;
        };
        i++;
    }
    int pivotIndex = count + s;
    swap(arr[s], arr[pivotIndex]);

    int j = s;
    int k = e;
    while (j < pivotIndex && k > pivotIndex)
    {
        while (arr[j] < arr[pivotIndex])
        {
            j++;
        }
        while (arr[k] > arr[pivotIndex])
        {
            k--;
        }
        if (j < pivotIndex && k > pivotIndex)
        {

            swap(arr[j++], arr[k++]);
        }
    }

    print(arr, e + 1);
    cout << endl
         << endl;
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // for left partition
    quickSort(arr, s, p - 1);
    // for right partition
    quickSort(arr, p + 1, e);
}

int main()
{

    /* write code here */
    int arr[6] = {6, 40, 1, 5, 70, 4};
    int n = 6;
    quickSort(arr, 0, n - 1);

    cout << "sorted" << endl;
    print(arr, n);

    return 0;
};
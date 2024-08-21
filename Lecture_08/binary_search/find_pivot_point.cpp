#include <iostream>
using namespace std;

int findPivotPoint(int arr[], int size)
{

    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[8] = {50, 60, 70, 10, 20, 30, 35, 40};
    int size = 8;

    cout << findPivotPoint(arr, size) << endl;
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int key;
    cin >> key;

    int arr[7] = {2, 5, 6, 7, 19, 89, 99};
    int size = 7;
    cout << binarySearch(arr, size, key) << endl;
}
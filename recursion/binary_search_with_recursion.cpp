#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return false;
    };
    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        return true;
    }
    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{

    int arr[7] = {1, 2, 4, 5, 6, 10, 20};
    int size = 7;
    int key;
    cin >> key;

    bool isPresent = binarySearch(arr, 0, size - 1, key);
    if (isPresent)
    {
        cout << "Number found" << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }

    return 0;
};
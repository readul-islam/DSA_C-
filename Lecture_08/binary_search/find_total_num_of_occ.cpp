#include <iostream>
using namespace std;

// find fast occurrence
int fastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
// find last  occurrence
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int key;
    cin >> key;
    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 8, 9, 10};
    int size = 10;
    int fastPos = fastOcc(arr, size, key);
    int lastPos = lastOcc(arr, size, key);

    if (fastOcc)
    {
       cout<<"Number of occurrence " <<(lastPos-fastPos) +1 << endl;
    }
}
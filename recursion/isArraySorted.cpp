#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isSorted(int *arr, int size)
{
    // can be array empty or length of array 1;
    if (size == 0 || size == 1)
    {
        return true;
    };

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{

    /* write code here */
    int arr[6] = {1, 2, 3, 20, 5, 6};
    int size = 6;

    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
};
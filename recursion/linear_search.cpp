#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool linearSearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    };
    if (arr[size - 1] == key)
    {
        return true;
    }
    return linearSearch(arr, size - 1, key);
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 11};
    int size = 7;
    int key;
    cin >> key;

    bool isPresent = linearSearch(arr, size, key);
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
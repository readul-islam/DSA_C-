#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int totalSwap = size / 2;
    for (int i = 0; i < totalSwap; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
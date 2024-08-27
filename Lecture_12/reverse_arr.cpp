#include <iostream>
#include <vector>
using namespace std;

void reverseArr(int arr[], int size, int m)
{

    int start = m + 1;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    int m; // postion to start reverse
    cin >> m;

    reverseArr(arr, size, m);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
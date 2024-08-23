#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }

        if (isSwapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[6] = {30, 2, 5, 20, 16, 90};
    int size = 6;
    // sort
    bubble_sort(arr, size);


    // print
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
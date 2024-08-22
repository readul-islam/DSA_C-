#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[6] = {65, 4, 2, 8, 32, 1};
    int size = 6;

    selection_sort(arr,size);

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
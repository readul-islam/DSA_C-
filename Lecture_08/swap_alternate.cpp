/*
input = {1,2,4,5,7};
output = {2,1,5,4,7};
*/

#include <iostream>
using namespace std;

void takeInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void swapAlternate(int arr[], int size)
{
    int iteration = size / 2;
    int start = 0;
    int end = 1;
    while (iteration != 0)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
        iteration--;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    takeInput(arr, n);
    swapAlternate(arr, n);
    printArr(arr, n);
}
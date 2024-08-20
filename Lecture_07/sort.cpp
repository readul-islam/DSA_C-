// 0 1 2 2 1 0
// output : 0 0 1 1 2 2

#include <iostream>
using namespace std;

void sortArr(int arr[], int size)
{
for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
        if(arr[i]>arr[j]){
            swap(arr[i], arr[j]);
        }
    }
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
    int arr[6] = {0, 1, 2, 2, 1, 0};
    int size = 6;

    sortArr(arr, size);
    printArr(arr, size);
}
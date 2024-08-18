#include <iostream>
using namespace std;
// 1st method
void reverseArray(int arr[], int size)
{
    int totalSwap = size / 2;
    for (int i = 0; i < totalSwap; i++)
    {
        // custom code for swap
        // int temp = arr[i];
        // arr[i] = arr[size - 1 - i];
        // arr[size - 1 - i] = temp;
        // built in function for swap
        swap(arr[i], arr[size-1-i]);
    }
}
// 2cnd method
void reverseArray1(int arr[], int size)
{
   int start = 0;
   int end = size-1;

   while(start<=0){
    swap(arr[start] , arr[end]);
    start++;
    end--;
   }
}



int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    reverseArray1(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
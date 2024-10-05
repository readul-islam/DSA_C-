#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int sumArray(int *arr, int size)
{
    if (size == 0)
        return 0;

    int sum = arr[0] + sumArray(arr + 1, size - 1);
    return sum;
}

int main()
{

    /* write code here */
    int arr[6] = {1, 20, 30, 40, 50, 100};
    int size = 6;

    cout << sumArray(arr, size) << endl;

    return 0;
};
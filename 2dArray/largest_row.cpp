#include <iostream>
#include <algorithm>
using namespace std;

int FindLargestRow(int arr[][4], int rows, int cols)
{
    int maxi = 0;
    int rowIndex = -1;
    for (int row = 0; row < rows; row++)
    {
        int sum = 0;

        for (int col = 0; col < cols; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex+1;
}

int main()
{
    int arr[3][4] = {
        {10, 20, 30},
        {40, 555, 88},
        {88, 77, 99},
    };

    // find largest row;

    cout << "Largest Row : " << FindLargestRow(arr, 3, 4) << endl;
}
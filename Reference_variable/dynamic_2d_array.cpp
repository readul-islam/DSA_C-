#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // create 1D dynamic array
    int *nums = new int[row];

    // create 2D dynamic array

    int **arr = new int *[row]; // double pointer
    // creating 2d array
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    };
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // clear row memory or nested pointer
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    };
    // clear main pointer
    delete[] arr;
};

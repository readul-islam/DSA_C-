#include <iostream>
#include <vector>
#include <algorithm> // For std::swap
using namespace std;

int main()
{ // when  matrix will be n*n dimension ex. 2*2 ,4*4
    vector<vector<int>> arr{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };

    int row = arr.size();
    int col = arr[0].size();

    // Transpose the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++) // Only swap
        {
            swap(arr[i][j], arr[j][i]);
        };
        // reverse(arr[i].begin(), arr[i].end());
    }

    cout << "=======================" << endl;
    // Output the transposed 2D vector
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

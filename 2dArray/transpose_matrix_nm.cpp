#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3, 4},
        {10, 20, 30, 40},
        {16, 2, 3, 4},
        {555, 20, 30, 40},
    };

    // ans matrix transpose dimension
    int n = matrix.size();    // n dimension
    int m = matrix[0].size(); // m dimension

    vector<vector<int>> matrixT(m, vector<int>(n));

    for (int r = 0; r < n; r++)
    {
        for (int col = 0; col < m; col++)
        {
            matrixT[col][r] = matrix[r][col];

            cout << col << " " << r << " MatrixT" << endl;
            cout << r << " " << col << " Matrix" << endl;
            cout << "======================" << endl;
        }
    };

    cout << "Befor Reverse " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixT[i][j] << " ";
        };

        cout << endl;
    }

    cout << "After Reverse  and row" << m << endl;
    // reverse every row;
    for (int r = 0; r < m; r++)
    {

        reverse(matrixT[r].begin(), matrixT[r].end());
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixT[i][j] << " ";
        };

        cout << endl;
    }
}
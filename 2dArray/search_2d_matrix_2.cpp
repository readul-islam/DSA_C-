#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare and initialize a 2D vector
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int target = 13;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0)
    {
        int element = matrix[row][col];
        if (element == target)
        {
            cout << element << " " << target << " Found" << endl;
            
            break;
        }
        else if (element < target)
        {
            cout << element << " element < target " << target << endl;
            row++;
        }
        else
        {
            cout << element << " element > target " << target << endl;
            col--;
        }
    }
}

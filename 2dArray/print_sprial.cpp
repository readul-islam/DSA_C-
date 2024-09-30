#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };

    int row = arr.size();
    int col = arr[0].size();
    // initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;

    int totalElement = row * col;
    int count = 0;

    while (count < totalElement)
    {

        // iterate on first row;
        for (int index = startingCol; count < totalElement && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }

        startingRow++;

       

        // iterate on last column
        for (int index = startingRow; count < totalElement && index <= endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";

            count++;
        };
        endingCol--;

     

        // iterate on last row
        for (int index = endingCol; count < totalElement && count < totalElement && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        };
        endingRow--;

        

        // iterate on first col
        for (int index = endingRow; count < totalElement && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        };
        startingCol++;

       
    }
}

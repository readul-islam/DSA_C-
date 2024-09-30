#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;

    // Declare and resize the vector to n x n dimensions
    vector<vector<int>> ans(n, vector<int>(n));  // This initializes an n x n 2D vector

    int totalElement = n * n;
    int range = 1;

    int startingRow = 0, startingCol = 0;
    int endingRow = n - 1, endingCol = n - 1;

    // Spiral filling loop
    while (range <= totalElement) {
        // Fill the first row, iterating from startingCol to endingCol
        for (int index = startingCol; range <= totalElement && index <= endingCol; index++) {
            ans[startingRow][index] = range;
            range++;
        }
        startingRow++;



// Fill the last col, iterating from startingRow to endingRow
        for (int index = startingRow; range <= totalElement && index <= endingRow; index++) {
            ans[index][endingCol] = range;
            range++;
        }
        endingCol--;


// Fill the last row, iterating from endingCol to startingCol
        for (int index = endingCol; range <= totalElement && index >= startingCol; index--) {
            ans[endingRow][index] = range;
            range++;
        }
        endingRow--;

// Fill the fast col, iterating from endingRow to startingRow
        for (int index = endingRow; range <= totalElement && index >= startingRow; index--) {
            ans[index][startingCol] = range;
            range++;
        }
        startingCol++;


        
    }

   

    return 0;
}

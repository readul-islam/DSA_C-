#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int start = 0;
        int end = rows * cols - 1;
        
        // Binary search
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // Convert mid to 2D indices
            int midValue = matrix[mid / cols][mid % cols];
            
            // Check if mid element is the target
            if (midValue == target) {
                return true;
            } else if (midValue < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;  // Return false if target is not found
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target;
    cout << "Enter the target number: ";
    cin >> target;
    
    Solution sol;
    if (sol.searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }
}

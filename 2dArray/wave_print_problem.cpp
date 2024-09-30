#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr{
        {1, 2, 3, 70},
        {4, 5, 6, 80},
        {7, 8, 9, 16},
    };

    vector<int> ans;

    for (int col = 0; col < 4; col++)
    {
        if (col == 0 || col % 2 == 0)
        {
            for (int row = 0; row < 3; row++)
            {

                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for (int row = 3 - 1; row >= 0; row--)
            {

                ans.push_back(arr[row][col]);
            }
        }
    }
 int a = 2;
    int b = 4;
    int c = a ^ b;
    cout << c;

    return 0;
}

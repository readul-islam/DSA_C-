#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[2][2][4] = {
        {
            {1, 2, 3, 4},
            {4, 6, 7, 8},
        },
        {
            {9, 10, 11, 12},
            {13, 14, 15, 16},
        },
    };

    for(int row1 = 0; row1<2; row1++){
       for(int row2=0; row2<2; row2++){
        int sum = 0;
        for(int col = 0;col<4; col++ ){
        sum+= arr[row1][row2][col];
        };
        cout << sum << endl;
       } 
    }

    // column wise sum;

    cout << "=========" << endl;
    // column wise sum;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4][4]={
        {1,10,11,12},//34
        {2,20,21,22},//65
        {3,30,31,32},//96
        {4,40,41,42},//127
    };

// column wise sum;

for(int col = 0; col<4; col++){
    int sum = 0;
    for(int row = 0; row<4; row++){
        sum+= arr[row][col];
    };

    cout<< "Column " << col+1  << " "<< sum << endl;
}


cout << "=========" << endl;
// column wise sum;

for(int row = 0; row<4; row++){
    int sum = 0;
    for(int col = 0; col<4; col++){
        sum+= arr[row][col];
    };

    cout<< "Column " << row+1  << " "<< sum << endl;
}


}
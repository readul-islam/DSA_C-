#include <iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int row, int col){
for(int i = 0; i < 4; i++){
        for(int j =0; j < 3 ; j++){
         if( arr[i][j] == target){
            return 1;
         };
        }
    }

    return 0;
}

int main() {
    int table[3][4];
// taking input row wise
    for(int row = 0; row < 4; row++){
        for(int col =0; col < 3 ; col++){
            cin >> table[row][col];
        }
    }
// taking input column wise

  /*  for(int col = 0; col < 3; col++){
        for(int row =0; row < 4 ; row++){
            cin >> table[row][col];
        }
    } */

    for(int row = 0; row < 4; row++){
        for(int col =0; col < 3 ; col++){
           cout <<table[row][col] << " " ;
        }
        cout << endl;
    }
 

   cout << "Enter target Element: " << endl;
   int target;
   cin >> target;

   if(isPresent(table, target, 3, 4)){
    cout << "Found Element" << endl;
   }else{
        cout << "Not Found Element" << endl;

   }

    return 0;
}
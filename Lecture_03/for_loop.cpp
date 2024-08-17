#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cin >> n;

   for(int j = 1; j <=n; j++){
    cout << j<< endl;
   }

   for(;;){
    if(i<=n){
        cout << "printing i value "<< i << endl;

    }else{
        break;
    }
    i++;
   }
}
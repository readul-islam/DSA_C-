#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int isTrue = 0;
    for(int i = 0; i <=30; i++){
        int sqr = pow(2,i);
        if(sqr == n){
           isTrue = 1;
        }
    }
 if(isTrue){
    cout << "True" << endl;
 }else{
    cout << "False" << endl;
 }

}
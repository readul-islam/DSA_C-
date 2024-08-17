#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0; 
    int scnd = 1;
   cout << first << " " << scnd << " ";
    for(int i =3; i <= n ; i++){
       int nextNum = (first + scnd);
       cout << nextNum << " ";
       first = scnd ;
       scnd = nextNum;
    }
    cout << endl;
}
#include<iostream>
using namespace std;


int max_of_four(int a,int b, int c, int d){
  int m1 = max(a, b); 
  int m2 = max(c,d);
 return max(m1,m2);
}

int main(){
 int a, b, c , d;
 cin >> a >> b >> c >> d;
 max_of_four(a, b, c, d);
}
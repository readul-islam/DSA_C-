// int => 4 or 2 byte => 34 or 16 bit
// char => 1 byte => 8 bit
// bool => 1 byte => 8 bit
// float => 4 byte => 32 bit
// double => 8 byte => 64 bit
#include <iostream>
using namespace std;

int main(){
int a = 5;
cout << sizeof(a) << endl;
char b = 'a';
cout << sizeof(b) << endl;

bool c = true ;
cout << sizeof(c) << endl;
}
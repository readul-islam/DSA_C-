#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {


/* write code here */

int arr[5] {0} ;
int *ptr = &arr[0];
// next address or next value
cout << *(arr+1) << endl;
cout << *(ptr+1) << endl;
// increment by arr or pointer
cout << *(arr+1)+1 << endl;
cout << *(ptr+1)+1 << endl;


int *pt = ptr;
cout << *pt+1 << endl;
cout << "===============" << endl;

char ch[6] = "abcde";
char *c = &ch[0] ;
cout << *(&ch) << endl;
cout << c << endl;

    return 0;
};
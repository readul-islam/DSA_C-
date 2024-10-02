#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void print(int *p){
    // (*p)++;
  *p = *p + 1;
// cout << p << endl;
// cout << *p << endl;
}

int main() {


/* write code here */
int value = 5; 
int *p = &value;

cout << "before value " << value << endl;
print(p);
cout << "after value " << value << endl;


    return 0;
};

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void update(int& n ){ // pass by reference
    n++;
}

int main() {


/* write code here */
int i = 5;
// create references variable
int& j = i;
j++;
cout << j << endl;

int n  = 5;
cout << "Before " << n << endl;
update(n);
cout << "after " << n << endl;

// stack => static memory allocation 
// heap => Dynamic memory allocation // alway start with new keyword
};
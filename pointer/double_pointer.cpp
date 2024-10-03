#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {


/* write code here */
int i = 6;
int *p = &i;
int **q = &p;
(**q)++;
cout << **q << endl;

    return 0;
};
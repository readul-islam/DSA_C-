#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int num = 5;
    // print address of nums;
    // & => address operator
    cout << &num << endl;
    // create pointer of nums;
    int *ptr = &num;
    // print pointer value ;
    cout << ptr << endl; // stored address of num;
    // print pointer address of value;
    cout << *ptr << endl;
    *ptr = *ptr + 8;

    cout << *ptr << endl;

    int i = 6;
    int *p = 0;
    p = &i;
    *p = (*p) + 1;
    cout << *p << endl;
    return 0;
};
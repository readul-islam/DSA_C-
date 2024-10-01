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
    // when one pointer address hold another pointer
    int **ptr1 = &ptr;
    cout << ptr1 << " - " << &ptr << endl;
    cout << **ptr1 << " - " << *ptr << endl;






    int i = 6;
    int *p = 0;
    p = &i;
    *p = (*p) + 1;
    cout << *p << endl;

    cout << "size of pointer  value: " << sizeof(p) << endl;
    cout << "size of pointer address value: " << sizeof(*p) << endl;
    return 0;
};
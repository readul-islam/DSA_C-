/*
    Time Complexity : O(N*log(N))
    Space Complexity : O(1)

    Where N is the size of the array.
*/

#include <algorithm>
#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
    sort(arr, arr+n);
}
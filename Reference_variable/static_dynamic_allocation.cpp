#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    /* write code here */
    // stack => static memory allocation
    // heap => Dynamic memory allocation // alway start with new keyword

    int *arr = new int[10];
    // total byte = 8(stack:static allocation) + 40(heap:dynamic memory allocation)

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 5;
    };

    cout << arr[9] << endl;

    return 0;
};
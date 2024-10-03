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

    // static allocation by default release memory of variable
    // dynamic allocation not release memory by default. we need to free memory manually

    int *i = new int;
    *i = 10;
    cout << "Before free heap memory " << *i << endl;
    // free heap memory
    delete i;
    cout << "after free heap memory " << *i << endl;
    int *nums = new int[10];
    *nums = 10;
    cout << "Before free heap memory " << nums[0] << endl;
    // free heap memory
    delete[] nums;
    cout << "after free heap memory " << nums[0] << endl;

    return 0;
};
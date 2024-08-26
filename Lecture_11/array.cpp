#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 4> arr = {1, 2, 3, 4};

    // size
    cout << arr.size() << endl;
    // access
    cout << arr.at(2) << endl;
    // access front and last position
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    // first address of array
    cout << *arr.begin() << endl;
    // check array is empty or not
    cout << arr.empty() << endl;
    
}
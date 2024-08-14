#include <iostream>
using namespace std;
// check this input number is prime or not
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 2;
    bool is_prime;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    while (i < n)
    {
        if (n % 2 == 0)
        {
            is_prime = false;
            break;
        }
        i++;
    }


    if(!is_prime){
        cout << "A prime number" << endl;
    }else{
        cout << "Not a prime number" << endl;
    }
}
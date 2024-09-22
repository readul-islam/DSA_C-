#include <iostream>
using namespace std;





void toUppercase(char name[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 'a' + 'A';
        }
    }
}
void toLowercase(char name[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] - 'A' + 'a';
        }
    }
}

int main()
{
    char name[6] = "akash";                        // Increased size to 6 to accommodate null terminator
    toUppercase(name, 5);                          // Call the function to convert to uppercase
    cout << "Uppercase applied: " << name << endl; // Print the modified name
    toLowercase(name, 5);                          // Call the function to convert to uppercase
    cout << "Lowercase applied: " << name << endl; // Print the modified name
    // Important
    char b = 'B' - 'A' + 'a';
    char B = 'b' - 'a' + 'A';
    int n = '2' - '0';

    cout << b << endl; // Output: b
    cout << B << endl; // Output: B
    cout << n << endl; // Output: 2

    return 0; // Good practice to return an int from main
}

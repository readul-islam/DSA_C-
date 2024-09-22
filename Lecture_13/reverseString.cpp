#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char s[6] = {'H', 'a', 'n', 'n', 'a', 'h'};

    int len = 6;
  
    for (int i = 0; i < len / 2; i++)
    {
        swap(s[i], s[len - i - 1]);
    }


    for(int i =0; i<len; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}
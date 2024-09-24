#include <iostream>
using namespace std;

int main()
{
    char name[5] = "akka";
    string name1 = "bkka";
    name[1] = '\0';
    name1[3] = '\0';
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << " 1" << endl;
        cout << "=============" << endl;
    }

    for (int i = 0; i < name1.length(); i++)
    {
        cout << name1[i] << " 2" << endl;
    }
    cout << name << endl;
    cout << name1.length() << endl;
}
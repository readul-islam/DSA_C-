#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l;

    l.push_back(1);
    l.push_front(0);

    // l.pop_back()
    // l.pop_front()

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << l.size() << endl;
}
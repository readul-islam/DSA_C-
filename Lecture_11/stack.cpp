#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<string> s;

    s.push("Alim");
    s.push("Akash");
    s.push("Sagor");

    cout << "Top Element " << s.top() << endl;

    s.pop();
    cout << "after pop Top Element " << s.top() << endl;


    cout << s.size() << endl;
    cout << s.empty() << endl;
}
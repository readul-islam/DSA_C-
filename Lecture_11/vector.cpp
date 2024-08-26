#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "SIZE: " << v.size() << endl;

    v.push_back(1);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "SIZE: " << v.size() << endl;

    v.push_back(2);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "SIZE: " << v.size() << endl;

    v.push_back(3);

    cout << "Capacity: " << v.capacity() << endl;
    cout << "SIZE: " << v.size() << endl;

    cout << "Element at 2nd index: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    cout << "Back: " << v.empty() << endl;


    for(auto i:v){
        cout <<i<<" ";
    }
    cout << endl;
}

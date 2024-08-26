#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> v;
    deque<int> a(5,1);
   
    cout << "SIZE: " << v.size() << endl;

    v.push_back(1);
    v.push_front(0);

   
    cout << "SIZE: " << v.size() << endl;

    v.push_back(2);

   
    cout << "SIZE: " << v.size() << endl;

    v.push_back(3);

   
    cout << "SIZE: " << v.size() << endl;

    cout << "Element at 2nd index: " << v.at(2) << endl;

    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    cout << "Back: " << v.empty() << endl;


    for(int i:v){
        cout <<i<<" ";
    }
    cout << endl;
    for(int i:a){
        cout <<i<<" ";
    }
    cout << endl;



    // remove range of element from deque;
    v.erase(v.begin(), v.begin()+1);
    cout << v.size() << endl;

     for(int i:v){
        cout <<i<<" ";
    }
    cout << endl;
}
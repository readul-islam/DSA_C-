#include<iostream>
using namespace std;

void reverseInt (char name[], int n){
    int s = 0;
    int e = n -1;
    while(s<e){
        swap(name[s++], name[e--]);

    }
}

int getLength (char name[]){
    int count = 0;
    for(int i = 0; name[i]!= '\0'; i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    // put null character
    //name[2] = "\0";


cout << "Your name is " << name << endl;
int len = getLength(name);

cout << "Length: " << len << endl;
reverseInt(name, len);
cout << "After Reverse => Your name is " << name << endl;

}
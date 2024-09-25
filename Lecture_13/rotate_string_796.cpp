#include<iostream>
using namespace std;
/* Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift. */

bool rotateString(string s , string goal){
    // if s of length not equal goal of length then return false
    int lenS= s.length();
    int lenG= goal.length();
    if(lenS!=lenG) 
    return false;
    // iterate on s and shift fast char at the end of s and compare with goal
    for(int i = 0; i<lenS;i++){
        s = s.substr(1) + s[0];
        cout << s << endl << "========" << endl;
        if(s==goal)
        return true;
    }

    return false;

}

int main(){
    string s = "abcde", goal = "cdeab";
    cout <<  rotateString(s, goal) << endl;

}
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

void subsequences(string txt, int index, vector<string> &ans, string output){
    if(index == txt.size()){
        ans.push_back(output);
        return;
    };

    //exclude 
    subsequences(txt, index+1, ans, output);

    // include
    char ch = txt[index];
    

    subsequences(txt, index+1, ans, output);

}

int main()
{
    string txt = "abc";
    string output = "";
    vector<string> ans;


    return 0;
};
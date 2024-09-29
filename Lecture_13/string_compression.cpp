#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int len = chars.size();
    int ansIndex = 0;
    int i = 0;

    while(i<len){
        int j = i+1;
        while(j<len && chars[i] == chars[j]){
            j++;
        };

        chars[ansIndex++] = chars[i];
        int count = j - i;

        if(count >1){
            string cnt = to_string(count);
            for(char ch :cnt){
                chars[ansIndex++] = ch;
            }
        }

        i=j;

    }

   for(int i = 0; i<len;i++){
    cout << chars[i] << " ";
   }


}
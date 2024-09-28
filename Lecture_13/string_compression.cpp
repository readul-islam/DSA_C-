#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string ch[8] = {"a", "a", "b", "b", "c", "c", "c"};
    vector<string> output;
    int size = 8;
    int left = 0;
    int right = 1;
    while (right < size)
    {
        if (ch[left] == ch[right])
        {
            right++;
        }
        else
        {

            output.push_back(ch[left]);
            int count = right - left;
            string s = to_string(count);
            if (count == 1)
            {
                left = right;
                continue;
            }
            else if (count < 10)
            {

                output.push_back(to_string(count));
            }
            else
            {
                string countStr = to_string(count);
                for (char digit : countStr)
                {
                    output.push_back(string(1, digit)); 
                }
            }
        }
    }


    for(int i = 0; i< output.size(); i++){
        cout << output[i] << endl;
    }
}
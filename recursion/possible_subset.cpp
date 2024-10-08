#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void possibleSubset(vector<int> nums, int index, vector<int> output, vector<vector<int> > &ans)
{
if(index>=nums.size()){
    ans.push_back(output);
    return ;
}

//exclude
possibleSubset(nums, index+1, output, ans);

int include = nums[index];
output.push_back(include);
possibleSubset(nums, index+1, output, ans);
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);


    int n = 4;
    int index = 0;
    vector<vector<int> > ans;
    vector<int> output;

    possibleSubset(nums, index, output, ans);



    cout << ans.size() << endl;

    return 0;
};
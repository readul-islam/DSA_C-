/*
You are given an integer array nums and an integer k.
Find the maximum subarray sum of all the subarrays of nums that meet the following conditions.
* the length of the subarray is k and

 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    //[1,5,4,2,9,9,9,9]
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(9);

    int k = 3;
    int n = nums.size();
    // if(n<k)
    // return false;
    int left = 0;
    int right = 0;
    vector<int> sums;
    int sum = 0;

    while(right < n){
        
        if((right-left+1)<=k ){
            sum+= nums[right];
            right++;
        }else{
            sums.push_back(sum);
            sum=0;
            left++;
            right = left;
        }

    }
      int max = INT_MIN;
    for(int i = 0; i< sums.size(); i++){
      if(sums[i] > max){
        max = sums[i];
      }
    }
    cout << max << endl;
    
    
}
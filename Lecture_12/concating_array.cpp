#include <iostream>
#include <vector>
using namespace std;

void margeArray(vector<int> &nums1, int m, vector<int> nums2, int n)
{
    vector<int> arr = nums1;
    nums1.erase(nums1.begin(), nums1.end());
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr[i] <= nums2[j])
        {
            nums1.push_back(arr[i++]);
        }
        else
        {
            nums1.push_back(nums2[j++]);
        }
    }

    while (i < m)
    {
        nums1.push_back(arr[i++]);
    }

    while (j < n)
    {
        nums1.push_back(nums2[j++]);
    }

    for (int i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums1 = {1};
    vector<int> nums2 = {};

    margeArray(nums1, nums1.size(), nums2, nums2.size());
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
private:
    void permutationStringStore(vector<int>& arr, const string& s1) {
        for (char ch : s1) {
            arr[ch - 'a']++;
        }
    }

    bool isArrayZero(const vector<int>& arr) {
        for (int count : arr) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }

    bool window(vector<int>& arr, const string& s2, int n) {
        int m = s2.length();

        for (int i = 0; i < m; i++) {
            arr[s2[i] - 'a']--;

            if (i >= n) {
                arr[s2[i - n] - 'a']++;
            }

            if (isArrayZero(arr)) {
                return true;
            }
        }
        return false;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        vector<int> arr(26, 0);

        // Hidden case
        if (n > m) {
            return false;
        }

        // Store character counts of s1 in arr
        permutationStringStore(arr, s1);

        // Check for permutations in s2
        return window(arr, s2, n);
    }
};

int main()
{
    string s1 = "ab";
    string s2 = "eidaooo";
  cout <<  Solution().checkInclusion(s1, s2) << endl;
}

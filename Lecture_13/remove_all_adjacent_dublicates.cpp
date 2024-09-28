#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;

        while (i < s.length()) {
            // Check if the next character is the same
            if (i < s.length() - 1 && s[i] == s[i + 1]) {
                // Remove the adjacent duplicates
                s.erase(i, 2); // Erase the current and the next character
                // After erasing, do not increment i; check the new character at the same position
                if (i > 0) {
                    i--; // Move back one position if possible to check for new adjacent duplicates
                }
            } else {
                i++; // Move to the next character
            }
        }

        return s; // Return the modified string
    }
};

int main() {
    Solution sol;

    // Example test cases
    cout << sol.removeDuplicates("abbaca") << endl; // Output: "ca"
    cout << sol.removeDuplicates("azxxzy") << endl; // Output: "ay"
    cout << sol.removeDuplicates("aaaaaaaa") << endl; // Output: ""
    cout << sol.removeDuplicates("abc") << endl; // Output: "abc"

    return 0;
}

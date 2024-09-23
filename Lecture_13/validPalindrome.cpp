#include <iostream>
#include <cctype> // For isalnum and tolower
using namespace std;

class Solution {
public:
    char toLowercase(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch + ('a' - 'A'); // Convert uppercase to lowercase
        }
        return ch; // Already lowercase or not a letter
    }

    string removeChar(const string& s) {
        string newString;
        for ( char c : s) {
            if (isalnum(c)) {
                newString.push_back(c);
            }
        }
        return newString;
    }

    bool checkValidPalindrome(const string& s, int len) {
        for (int i = 0; i < len / 2; i++) {
            if (toLowercase(s[i]) != toLowercase(s[len - i - 1])) {
                return false;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        string newString = removeChar(s);
        return checkValidPalindrome(newString, newString.length());
    }
};

int main() {
    Solution solution;
    string test = "A man, a plan, a canal: Panama";
    cout << (solution.isPalindrome(test) ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}

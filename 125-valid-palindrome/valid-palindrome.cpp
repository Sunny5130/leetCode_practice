class Solution {
public:
    bool isPalindrome(string s) {
        string f;
                for (char c : s) {
            if (isalnum(c)) {
                f += tolower(c);
            }
        }
        string reversedStr = f;
        reverse(reversedStr.begin(), reversedStr.end());
        return f == reversedStr;
    }
};

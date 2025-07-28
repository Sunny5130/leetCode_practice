class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> strStack;
        string current = "";
        int k = 0;
        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0');
            } else if (ch == '[') {
                countStack.push(k);
                strStack.push(current);
                k = 0;
                current = "";
            } else if (ch == ']') {
                int times = countStack.top(); countStack.pop();
                string prev = strStack.top(); strStack.pop();
                while (times-- > 0) prev += current;
                current = prev;
            } else {
                current += ch;
            }
        }
        return current;
    }
};

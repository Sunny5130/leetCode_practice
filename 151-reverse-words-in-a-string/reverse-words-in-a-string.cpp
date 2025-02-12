class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty())
            words.push_back(word);
        string res = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            res += words[i];
            if (i != 0)
                res += " ";
        }

        return res;
    }
};

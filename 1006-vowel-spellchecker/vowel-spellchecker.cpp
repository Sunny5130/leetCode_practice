class Solution {
    static string toLower(const string &s) {
        string t = s;
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        return t;
    }
    static string toVowel(const string &s) {
        string t = s;
        for (char &c : t) if (string("aeiou").find(c) != string::npos) c = '#';
        return t;
    }
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string> exact(wordlist.begin(), wordlist.end());
        unordered_map<string,string> lower, vowel;
        for (auto &w : wordlist) {
            string lw = toLower(w), vw = toVowel(lw);
            if (!lower.count(lw)) lower[lw] = w;
            if (!vowel.count(vw)) vowel[vw] = w;
        }
        vector<string> ans;
        for (auto &q : queries) {
            if (exact.count(q)) ans.push_back(q);
            else {
                string lq = toLower(q), vq = toVowel(lq);
                if (lower.count(lq)) ans.push_back(lower[lq]);
                else if (vowel.count(vq)) ans.push_back(vowel[vq]);
                else ans.push_back("");
            }
        }
        return ans;
    }
};

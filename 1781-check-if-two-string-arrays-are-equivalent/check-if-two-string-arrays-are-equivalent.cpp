class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& s1, vector<string>& s2) {
        string str1 = accumulate(s1.begin(), s1.end(), string());
        string str2 = accumulate(s2.begin(), s2.end(), string());
        return str1 == str2;
    }
};

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        int fr=map.begin()->second;
        for(int i=0;i<s.length();i++){
            if(map[s[i]]!=fr)return false;
        }
        return true;
    }
};
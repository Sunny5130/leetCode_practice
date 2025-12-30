class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++)map[s[i]]++;
        for(int i=0;i<t.length();i++){
            if(!map.count(t[i]) || map[t[i]]==0)return false;
            map[t[i]]--;
        }
        return true;
    }
};
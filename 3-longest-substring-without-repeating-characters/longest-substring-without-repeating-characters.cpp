class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int maxi=0;
        int st=0;
        for(int i=0;i<s.length();i++){
            if(map.find(s[i])!=map.end()){
                st=max(map[s[i]]+1,st);
            }
            map[s[i]]=i;
            maxi=max(maxi,i-st+1);
        }
        return maxi;
    }
};
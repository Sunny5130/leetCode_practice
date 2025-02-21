class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int maxL=0,start=0;
        for(int i=0;i<s.length();i++){
            if(map.find(s[i])!=map.end()){
                start=max(start,map[s[i]]+1);
            }
            map[s[i]]=i;
            maxL=max(maxL,i-start+1);
        }
        return maxL;
    }
};
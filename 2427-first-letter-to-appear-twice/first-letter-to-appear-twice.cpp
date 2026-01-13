class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            if(map.count(s[i])) return s[i];
            map[s[i]]++;
        }
        return 'No';
    }
};
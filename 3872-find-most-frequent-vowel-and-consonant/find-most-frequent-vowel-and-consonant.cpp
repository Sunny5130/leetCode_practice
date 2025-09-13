class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>odds;
        unordered_map<char,int>evens;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                odds[s[i]]++;
            }else{
                evens[s[i]]++;
            }
        }
        int oddcount=0,evencount=0;
        for (auto it = odds.begin(); it != odds.end(); it++) {
            oddcount = max(oddcount, it->second);
        }
        for (auto it = evens.begin(); it != evens.end(); it++) {
            evencount = max(evencount, it->second);
        }
        return oddcount+evencount;
    }
};
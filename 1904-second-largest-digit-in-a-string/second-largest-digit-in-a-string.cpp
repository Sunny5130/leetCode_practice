class Solution {
public:
    int secondHighest(string s) {
        set<int>ans;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i]))ans.insert(s[i]-'0');
        }
         if (ans.size() < 2) return -1; 
        auto it = ans.rbegin(); 
        it++;              
        return *it;
    }
};
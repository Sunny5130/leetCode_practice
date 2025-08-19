class Solution {
public:
    int longestContinuousSubstring(string s) {
        // if(s.length()==0)return 0;
        int count=0,maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]+1 == s[i+1]){
                count++;
                if(count>maxi){
                    maxi=count;
                }
            }else{
                count=0;
            }
        }
        return maxi+1;
    }
};
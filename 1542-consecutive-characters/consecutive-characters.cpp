class Solution {
public:
    int maxPower(string s) {
        int count=0,maxi=0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
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
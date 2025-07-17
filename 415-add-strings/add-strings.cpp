class Solution {
public:
    string addStrings(string s1, string s2) {
        string ans="";
        int carry=0;
        int i=s1.length()-1;
        int j=s2.length()-1;
        while(i>=0 || j>=0 || carry!=0){
            int sum=carry;
            if(i>=0)sum+=s1[i--]-'0';
            if(j>=0)sum+=s2[j--]-'0';
            ans+=(sum%10 +'0');
            carry=sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
class Solution {
public:
    string largestGoodInteger(string num){
        int n=num.length();
        string ans="";
        for(int i=1;i<n-1;i++){
            if(num[i-1] == num[i] && num[i] == num[i+1]){
                string integer = string(3, num[i]);
                ans = max(ans, integer);
            }
        }
        return ans;
    }
};
class Solution {
public:
    string reversestring(string str){
        int i=0,j=str.length()-1;
        while(i<j) swap(str[i++],str[j--]);
        return str;
    }
    string finalString(string s){
        string ans="";
        for(char c : s){
            if(c == 'i')ans = reversestring(ans);
            else ans += c;
        }
        return ans;
    }
};

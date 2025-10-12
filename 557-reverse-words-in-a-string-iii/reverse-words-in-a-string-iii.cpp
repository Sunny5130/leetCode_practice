class Solution {
public:
    string reversestring(string str){
        int i=0;
        int j=str.length()-1;
        while(i<j){
            swap(str[i++],str[j--]);
        }
        return str;
    }
    string reverseWords(string s) {
    string res="";
    string ans="";
    for(int i=0;i<s.length();i++){
            res+=s[i];
            if(s[i]==' '){
                res.pop_back();
                ans+=reversestring(res)+" ";
                res="";
            }
    }
    ans+=reversestring(res);
    return ans;
    }
};
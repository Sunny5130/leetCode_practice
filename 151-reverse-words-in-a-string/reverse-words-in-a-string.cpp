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
        string res = "";
        string ans = "";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == ' '){
                if(!res.empty()){
                    res=reversestring(res);
                    ans +=res +" ";
                    res = "";
                }
            } else res += s[i];  
        }
            if(!res.empty()){
            res = reversestring(res);
            ans += res;
        }
        if(!ans.empty() && ans.back()==' ')ans.pop_back();        
        return ans;
    }
};

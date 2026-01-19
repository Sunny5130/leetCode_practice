class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<int>st;
        for(int i=0;i<s.length();i++){
                while(!st.empty() && st.top()>s[i]-'0' && k>0){
                    st.pop();
                    k--;
                }
                    st.push(s[i]-'0');
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top()+'0';
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.size() && ans[i]=='0')i++;
        ans=ans.substr(i);
        return ans.empty() ? "0" : ans;
    }
};


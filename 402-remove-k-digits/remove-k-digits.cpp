class Solution {
public:
    string removeKdigits(string str, int k) {
        stack<char>st;
        if(k==str.length())return "0";
        for(int i=0;i<str.length();i++){
            while(!st.empty()&& k>0 &&(st.top()-'0')>(str[i]-'0')){
                st.pop();
                k--;
            }
            st.push(str[i]);
        }
        //if string is in increasing or sorted order
        while(k--){    
            st.pop();
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        // remove leading zeroes
        int i=0;
        while(i<res.size()&&res[i]=='0')i++;
        res=res.substr(i);
        return res.empty()?"0":res;
    }
};

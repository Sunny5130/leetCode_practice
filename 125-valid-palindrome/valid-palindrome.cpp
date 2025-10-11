#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                res+=tolower(s[i]);
        }
    }
        string ans=res;
        reverse(res.begin(),res.end());
        return res==ans;
    }
};
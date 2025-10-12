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
    string reverseStr(string s, int k) {
        string ans = "";
        int count = 0;
        for(int i=0;i<s.length();i+=k){
            string res = s.substr(i, k);
            if(count%2==0){
                res =reversestring(res);
            }
            ans +=res;
            count++;
        }
        return ans;
    }
};
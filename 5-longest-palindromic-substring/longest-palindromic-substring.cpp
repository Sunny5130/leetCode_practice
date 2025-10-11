// class Solution {
// public:
//     bool palindrome(string s){
//         string orig=s;
//         reverse(s.begin(),s.end());
//         if(orig==s)return true;
//         return false;
//     }
//     string longestPalindrome(string s) {
//         string res="";
//         for(int i=0;i<s.length();i++){
//             string ans="";
//             for(int j=i;j<s.length();j++){
//                 ans+=s[j];
//             if(palindrome(ans)==true){
//                 if(ans.size()>res.size())res=ans;
//             }
//         }
//     }
//         return res;
//     }
// };
class Solution {
public:
    bool palindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string res = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (j - i + 1 > (int)res.size() && palindrome(s, i, j)) {
                    res = s.substr(i, j - i + 1);
                }
            }
        }
        return res;
    }
};

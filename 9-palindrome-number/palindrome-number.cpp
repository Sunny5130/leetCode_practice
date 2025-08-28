class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long orig=x;
        long long ans=0;
        while(x > 0){
            ans =ans*10+(x%10);
            x=x/10;
        }
        return orig==ans;
    }
};
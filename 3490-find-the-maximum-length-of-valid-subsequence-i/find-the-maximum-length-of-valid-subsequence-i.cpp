// class Solution {
// public:
//     int maximumLength(vector<int>& nums) {
//         if(nums.size()<=2)return nums.size();
//         int count=2;
//         int maxln=2;
//         int l=0,r=1;
//         for(int i=1;i<nums.size()-1;i++){
//             int k=(nums[l]+nums[r]);
//             if((nums[i]+nums[i+1])%2 == k%2){
//                 l++;
//                 r++;
//                 count++;
//                 maxln=max(maxln,count);
//             }else{
//                 l=i;
//                 r=i+1;
//                 count=2;
//             }
//         }
//         return maxln;
//     }
// };


// class Solution {
// public:
//     int maximumLength(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>dp(n,1);
//         int maxlen = 1;

//         for(int i = 1; i < n; ++i) {
//             for(int j=0;j<i;++j){
//                 if ((nums[j]+nums[i])%2==(nums[i] + nums[i])%2){
//                     dp[i] = max(dp[i],dp[j]+1);
//                 }
//             }
//             maxlen = max(maxlen,dp[i]);
//         }

//         return maxlen;
//     }
// };

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int o = 0;
        int e = 0;
        int res = 1;
        int parity = nums[0] % 2;
        for (int i = 0; i < nums.size(); i++) {
            if (parity % 2 != nums[i] % 2) {
                res++;
                parity ^= 1;
            }
            if (nums[i] % 2) o++;
            else e++;
        }
        return max(o, max(e, res));
    }
};
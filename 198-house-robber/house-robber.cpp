class Solution {
public:
    int solve(vector<int>& nums, int n, vector<int>& dp) {
        if (n<0) return 0;
        if (dp[n] != -1) return dp[n];
        if (n == 0) return dp[n] = nums[0];

        int inclu = solve(nums,n-2,dp) + nums[n];
        int exclu = solve(nums,n-1,dp);
        return dp[n] = max(inclu,exclu);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return solve(nums,n-1,dp);
    }
};

class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, int exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int l = 0, r = nums.size() - 1;
        long long count = 0;

        while (l <= r) {
            if (nums[l] + nums[r] <= target) {
                count = (count + modPow(2, r - l)) % MOD;
                l++;
            } else {
                r--;
            }
        }

        return count;
    }
};

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n<4) return false;
        int i = 1;

        while (i < n && nums[i] > nums[i - 1]) i++;
        if (i == 1 || i == n) return false;

        int p = i;
        while (i < n && nums[i] < nums[i - 1]) i++;
        if (i == p || i == n) return false;

        int q = i;
        while (i < n && nums[i] > nums[i - 1]) i++;

        return i == n;
    }
};

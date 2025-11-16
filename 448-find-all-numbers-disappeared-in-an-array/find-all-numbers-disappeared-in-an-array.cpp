class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int expected = 1; 
        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(expected < nums[i]) {
                ans.push_back(expected);
                expected++;
            }
            expected++;
        }
        while(expected <= n) {
            ans.push_back(expected);
            expected++;
        }
        return ans;
    }
};
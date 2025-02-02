class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Map;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (Map.count(complement)) {
                return {Map[complement], i};
            }

            Map[nums[i]] = i;
        }

        return {};
    }
};
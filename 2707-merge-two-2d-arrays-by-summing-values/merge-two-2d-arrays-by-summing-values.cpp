class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mergedMap;
        for (auto& pair : nums1) {
            mergedMap[pair[0]] += pair[1];
        }
        for (auto& pair : nums2) {
            mergedMap[pair[0]] += pair[1];
        }
        vector<vector<int>> result;
        for (auto& entry : mergedMap) {
            result.push_back({entry.first, entry.second});
        }

        return result;
    }
};

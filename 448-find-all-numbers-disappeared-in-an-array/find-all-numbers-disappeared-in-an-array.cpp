class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>set(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(!set.count(i))ans.push_back(i);
        }
        return ans;
    }
};
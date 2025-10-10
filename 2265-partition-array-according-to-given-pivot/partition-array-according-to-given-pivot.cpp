class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        vector<int>res;
        vector<int>equal;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)ans.push_back(nums[i]);
            else if(nums[i]==pivot) equal.push_back(nums[i]);
            else res.push_back(nums[i]);
        }
        int i=0;
        while(i<equal.size()){
            ans.push_back(equal[i]);
            i++;
        }
        i=0;
        while(i<res.size()){
            ans.push_back(res[i]);
            i++;
        }
        return ans;
    }
};
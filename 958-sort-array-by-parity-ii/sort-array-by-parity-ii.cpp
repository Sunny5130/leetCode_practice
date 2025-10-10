class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int>ans;
        int i=0,j=0;
        while(i<odd.size() && i<even.size()){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
        }
        return ans;
    }
};
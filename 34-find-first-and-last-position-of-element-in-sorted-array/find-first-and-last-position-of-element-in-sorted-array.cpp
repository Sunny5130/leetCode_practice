class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        int n=ans.size();
        if(n>2)return{ans[0],ans[n-1]};
        if(ans.size()==1)return{ans[0],ans[0]};
        if(ans.size()==0)return {-1,-1};

        return ans;
    }
};
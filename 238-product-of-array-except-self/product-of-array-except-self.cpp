class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size(),1);
        vector<int>post(nums.size(),1);
        int sum=1;
        for(int i=1;i<nums.size();i++){
            sum*=nums[i-1];
            pre[i]=sum;
        }
        sum=1;
        for(int i=nums.size()-2;i>=0;i--){
            sum*=nums[i+1];
            post[i]=sum;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=pre[i]*post[i];
        }
        return nums;
    }
};
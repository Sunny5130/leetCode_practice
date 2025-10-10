class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i;
            }
        }
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<maxi && nums[i]*2>maxi){
                flag=false;
            }
        }
        if(flag==false)return -1;
        return idx;
    }
};
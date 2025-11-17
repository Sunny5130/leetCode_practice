class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int s=0;
        int l=nums.size()-1;
        while(s<=l){
            int m=(s+l)/2;
            if(nums[s]<=nums[m]){
                mini=min(mini,nums[s]);
                s=m+1;
            }else{
                mini=min(mini,nums[m]);
                l=m-1;
            }
        }
        return mini;
    }
};
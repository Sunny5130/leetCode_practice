class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0,maxi=0;
        for(int i=1;i<nums.size();i++){
                if(nums[i]>nums[i-1]){
                    count++;
                if(count>maxi){
                    maxi=count;
                }
        }else{
            count=0;
        }
        }
        return maxi+1;
    }
};
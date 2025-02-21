class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,maxL=0,zeroesCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroesCount++;
            }
            while(zeroesCount>k){
                if(nums[l]==0){
                    zeroesCount--;
                }
            l++;
            }
            maxL=max(maxL, i-l+1);
        }
        return maxL;
    }
};
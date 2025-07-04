class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                maxi=max(c,maxi);
            }else{
                c=0;
            }
            
        }
        return maxi;
    }
};
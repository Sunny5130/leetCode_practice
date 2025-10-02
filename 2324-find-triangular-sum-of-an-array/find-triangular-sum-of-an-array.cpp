class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        while(n>1){
            for (int j=0;j<n-1;j++){
                nums[j] =(nums[j]+nums[j+1])%10;
            }
            n--;
        }
        return nums[0];
    }
};
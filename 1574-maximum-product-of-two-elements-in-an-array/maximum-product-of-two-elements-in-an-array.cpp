class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                maxi=max((nums[i]-1)*(nums[j]-1),maxi);
                }
            }
        return maxi;
    }
};
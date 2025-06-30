class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxLen=0;
        int s=0;//starrt
        for (int e=0;e<nums.size();e++){ //e=end
            while(nums[e]-nums[s]>1){
                s++;
            }
            if (nums[e]-nums[s]==1){
                maxLen=max(maxLen,e-s+1);
            }
        }
        return maxLen;
    }
};

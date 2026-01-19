class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++)nums[i]=nums[i]*nums[i];
        // sort(nums.begin(),nums.end());
        // return nums;
        for(int i=0;i<nums.size();i++)nums[i]=nums[i]*nums[i];
        multiset<int>st(nums.begin(),nums.end());
        int i=0;
        for(int num:st)nums[i++]=num;
        return nums;
    }
};

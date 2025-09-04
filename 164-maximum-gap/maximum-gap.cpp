// class Solution {
// public:
//     int maximumGap(vector<int>& nums) {
//         int n=nums.size();
//         if(nums.size()<2)return 0;
//         sort(nums.begin(),nums.end());
//         int diff=nums[0];
//         bool flag=true;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==nums[i-1])flag=false;
//             int count = (nums[i]-nums[i-1]);
//             diff=max(count,diff);
//         }
//         if(flag==false && nums[0]==nums[n-1])return 0;
//         return diff;
//     }
// };

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;
        sort(nums.begin(), nums.end());
        int diff = 0; 
        for (int i = 1; i < n; i++) {
            diff = max(diff, nums[i] - nums[i-1]);
        }
        return diff;
    }
};

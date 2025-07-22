class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,sum=0,maxi=0;
        unordered_map<int,int>map;
        for(int r=0;r<nums.size();r++){
            int num=nums[r];
            while(map[num]>0){
                map[nums[l]]--;
                sum-=nums[l];
                l++;
            }
            map[num]++;
            sum+=num;
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
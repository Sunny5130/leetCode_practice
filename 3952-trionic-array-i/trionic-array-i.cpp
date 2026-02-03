class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=1,n=nums.size();
        if(n<4)return false;
        while(i<n && nums[i]>nums[i-1])i++;
        if(i==1 ||i==n)return false;
        int p=i;
        while(i<n && nums[i]<nums[i-1])i++;
        if(p==i ||i==n)return false;

        while(i<n && nums[i]>nums[i-1])i++;
        return i==n;
    }
};



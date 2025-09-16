class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int mid=(l+r)/2;
        while(l<=r){
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)l=mid+1;
            else r=mid-1;
            mid=(l+r)/2;
        }
        return -1;
    }
};



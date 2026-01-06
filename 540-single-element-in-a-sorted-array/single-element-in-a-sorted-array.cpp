class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int x=0;
        // for(int i=0;i<nums.size();i++){
        //     x=x^nums[i];
        // }
        // return x;
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(mid%2!=0)mid--;
            if(nums[mid]==nums[mid+1]){
                l=mid+2;
            }else{
                r=mid;
            }
        }
        return nums[l];
    }
};
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         if(arr.size()==1)return 0;
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]<arr[i-1])return i-1;
//         }
//         return arr.size()-1;

        int low=0,high=nums.size()-1;
        while(low<high){
            int mid = (high+low)/2;
            if(nums[mid]>=nums[mid+1])high =mid;
            else low = mid + 1;
        }
        return low;
    }
};

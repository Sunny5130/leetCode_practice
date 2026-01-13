class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         if(arr.size()==1)return 0;
//         for(int i=1;i<arr.size();i++){
//             if(arr[i]<arr[i-1])return i-1;
//         }
//         return arr.size()-1;
    int l=0,r=nums.size()-1;
    while(l<r){
        int mid=(l+r)/2;
        if(nums[mid]<nums[mid+1]){
            l=mid+1;
        }else{
            r=mid;
        }
    }return l;
    }
};

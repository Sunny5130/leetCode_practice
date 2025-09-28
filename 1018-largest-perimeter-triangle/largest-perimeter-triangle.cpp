class Solution {
public:
    int largestPerimeter(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for (int i=n-1;i>=2;i--){
            int a = nums[i],b=nums[i-1],c=nums[i-2];
            if(b+c>a){
                return a+b+c; 
            }
        }
        return 0;
    }
};
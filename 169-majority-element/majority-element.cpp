class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int ele=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ele){
                count++;
            }else{
                count--;
            }
            if(count==0){
                ele=nums[i];
                count=1;
            }
        }
        return ele;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(i==j)continue;
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};

    //     sort(nums.begin(),nums.end()); //yei code pair hai two element ka sum target ke equal
    //     int i=0,j=nums.size()-1;
    //     while(i<j){
    //         int sum=nums[i]+nums[j];
    //         if(sum==target){
    //             return {nums[i],nums[j]};
    //         }else if(sum<target){
    //             i++;
    //         }else{
    //             j--;
    //         }
    //     }
    //     return {};
    }
};
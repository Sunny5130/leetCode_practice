class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==0){
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }
    }
};
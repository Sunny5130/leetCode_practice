class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int i=0;
        while(i<odd.size()){
            even.push_back(odd[i++]);
        }
        return even;
    }
};
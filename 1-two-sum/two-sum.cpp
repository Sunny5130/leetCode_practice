class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int com=target-nums[i];
            if(map.count(com)){
                return {map[com],i};
            }else{
                map[nums[i]]=i;
            }
        }
        return {};
    }
};
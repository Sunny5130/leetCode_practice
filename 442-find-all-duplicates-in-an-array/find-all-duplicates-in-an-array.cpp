class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector<int>ans;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //         if(nums[i-1]==nums[i]){
        //             ans.push_back(nums[i]);
        //         }
        // }
        // return ans;
    // }

    unordered_map<int,int>map;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }
    for(auto it=map.begin();it!=map.end();it++){
        if(it->second>1){
            ans.push_back(it->first);
        }
    }
        return ans;
    }
};
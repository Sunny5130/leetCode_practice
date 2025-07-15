class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<pair<int,int>>v(map.begin(),map.end());
        
        sort(v.begin(),v.end(),[](auto &a,auto &b) {
            return a.second>b.second;
        });
        vector<int> ans;
        for(int i=0; i<k; i++){
        ans.push_back(v[i].first);
        }
        return ans;
    }
};

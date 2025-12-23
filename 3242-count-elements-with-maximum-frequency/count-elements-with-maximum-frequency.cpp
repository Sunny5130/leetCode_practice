class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>map;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            maxi=max(map[nums[i]],maxi);
        }
        int count=0;
        for(auto it=map.begin();it!=map.end();it++){
            if(it->second==maxi)count+=it->second;
        }
        return count;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>set(nums.begin(),nums.end());
        int maxi=0;
        for(auto it : set){
            if(!set.count(it-1)){
                int current=it;
                int count=0;
                while(set.count(current)){
                    count++;
                    current++;
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};
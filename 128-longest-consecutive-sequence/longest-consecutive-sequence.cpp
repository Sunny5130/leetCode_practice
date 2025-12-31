class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(auto it:st){
            if(!st.count(it-1)){
                int current=it;
                int count=0;
                while(st.count(current)){
                    current++;
                    count++;
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};
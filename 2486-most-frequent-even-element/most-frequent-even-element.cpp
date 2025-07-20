class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]%2==0) map[nums[i]]++;
        }
        int maxFreq=0, ans=-1;
        for(auto& [num, freq] : map) {
            if(freq>maxFreq || (freq==maxFreq && num<ans)) {
                maxFreq=freq;
                ans=num;
            }
        }
        return ans;
    }
};

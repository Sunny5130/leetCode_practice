class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i+=2){
            even.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i+=2){
            odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        vector<int>ans;
        int i=0,j=0;
        while(i<even.size() && j<odd.size()){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
        }
        while(i<even.size())ans.push_back(even[i++]);
        while(i<odd.size())ans.push_back(odd[j++]);
        return ans;
    }
};
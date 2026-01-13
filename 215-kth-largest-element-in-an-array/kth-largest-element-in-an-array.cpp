class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>st(nums.begin(),nums.end());
        int count =0;
        for (auto it=st.end();it!=st.begin();) {
            it--; 
            count++;
            if(count ==k)
                return *it;
        }
        return -1;
    }
};

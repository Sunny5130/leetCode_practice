class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> mp;
        for(int i=0;i<sorted.size();i++)
            if(!mp.count(sorted[i])) mp[sorted[i]]=i+1;

        int n=nums.size();
        vector<int> bit(n+2,0), ans(n);

        auto update=[&](int i){while(i<bit.size()) bit[i]++, i+=i&-i;};
        auto query=[&](int i){int res=0; while(i>0) res+=bit[i], i-=i&-i; return res;};

        for(int i=n-1;i>=0;i--) {
            int r=mp[nums[i]];
            ans[i]=query(r-1);
            update(r);
        }
        return ans;
    }
};

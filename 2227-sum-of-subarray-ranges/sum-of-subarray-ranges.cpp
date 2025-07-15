#include<bits/stdc++.h>
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            int maxi=INT_MIN;
            int mini=INT_MAX;
            for(int j=i;j<nums.size();j++){
                maxi=max(maxi,nums[j]);
                mini=min(mini,nums[j]);
            sum+=(long long)(maxi-mini);
        }
        }
        return (long long)sum;
    }
};
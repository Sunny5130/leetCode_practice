class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums){
        int freq[1001]={0};
        int m=nums.size();
        for(auto &arr : nums){
            for(int x : arr){
                freq[x]++; 
            }
        }
//sabhi array distinct hai means duplicate value nhai hai pahle frequency count kar lenge
// or kitne array hai vo size nikal lenge or usse compare karenge agar equal print freq[i];
        vector<int>ans;
        for(int i=1;i<=1000;i++){
            if(freq[i]==m){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

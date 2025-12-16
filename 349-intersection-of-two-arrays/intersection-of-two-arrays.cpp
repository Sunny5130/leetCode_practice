class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // int i=0,j=0;
        // int k=0;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // vector<int>ans;
        // while(i<nums1.size() && j<nums2.size()){
        //     if(nums1[i]==nums2[j]){
        //         if(ans.empty() || ans.back() != nums1[i]) {
        //         ans.push_back(nums1[i]);
        //         }i++;j++;
        //     }else if(nums1[i]>nums2[j]){
        //         j++;
        //     }else{
        //         i++;
        //     }
        // }
        // return ans;

        vector<int>ans;
        unordered_map<int,int>map;
        for(int i=0;i<nums1.size();i++){
            map[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(map.count(nums2[i])){
                ans.push_back(nums2[i]);
                map.erase(nums2[i]);
            }
        }
        return ans;
    }
};
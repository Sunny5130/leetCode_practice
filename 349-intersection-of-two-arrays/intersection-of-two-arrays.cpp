class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        set<int>se(nums1.begin(), nums1.end());
        set<int>result;
        for(int i=0;i<nums2.size();i++){
            if(se.count(nums2[i])) {
                result.insert(nums2[i]);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
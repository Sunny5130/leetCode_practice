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
//set ke ander element daal denge then set ko traverse karenge or check karenge ki
//agar set ka element ka ek kamm elemnt hai toh chod denge kyoki wahe sequence peache se chalti aa rahi hai
//agr element -1 set mai nhai hai toh matlab sequence idhar se suru hai or ellement ka +1 karenge or set mai check 
// karenge agar hai tob usko count++ kardo
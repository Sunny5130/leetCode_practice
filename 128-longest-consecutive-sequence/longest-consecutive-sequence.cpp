class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0)return 0;
        sort(arr.begin(),arr.end());
        int maxi=1,count=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]==arr[i])continue;
            else if(arr[i-1]==arr[i]-1)count++;
            else count=1;
            maxi=max(count,maxi);
        }
        return maxi;
    }
};
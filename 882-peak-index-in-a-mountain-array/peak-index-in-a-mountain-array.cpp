class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1])return i-1;
        }
        return n-1;
    }
};

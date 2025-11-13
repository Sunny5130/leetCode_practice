class Solution {
public:
    int findMin(vector<int>& arr) {
        // int start = 0;
        // int last = arr.size() - 1;
        // int ans = INT_MAX;
        // while (start <= last) {
        //     int mid = (start + last) / 2;
        //     if (arr[start] <= arr[mid]) {
        //         ans = min(ans, arr[start]);
        //         start = mid + 1;
        //     } else {
        //         ans = min(ans,arr[mid]);
        //         last = mid-1;
        //     }
        // }
        // return ans;
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
        }
        return mini;
    }
};
class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int s=0, e=arr.size()-1;
        while(s<=e) {
            int m=(s+e)/2;
            if(arr[m]==k) return true;
            if(arr[s]==arr[m] && arr[m]==arr[e]) {
                s++;
                e--;
            } else if(arr[s]<=arr[m]) {
                if(arr[s]<=k && k<arr[m]) e=m-1;
                else s=m+1;
            } else {
                if(arr[m]<k && k<=arr[e]) s=m+1;
                else e=m-1;
            }
        }
        return false;
    }
};

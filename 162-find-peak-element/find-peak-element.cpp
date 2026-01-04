class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1)return 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1])return i-1;
        }
        return arr.size()-1;
    }
};
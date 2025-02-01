class Solution {
public:
    int search(vector<int>& arr, int k) {
    int start=0;
    int last=arr.size()-1;
    while(start<=last){
        int mid=(start+last)/2;
        if(arr[mid]==k){
            return mid;
        }
        //for left sorted before mid
        if(arr[start]<=arr[mid]){
            if(arr[start]<=k && k<=arr[mid]){
                last=mid-1;
            }else{
                start=mid+1;
            }

        }else{
            //for right sorted array after mid
            if(arr[mid]<=k && k<=arr[last]){
                start=mid+1;
            }else{
                last=mid-1;
            }

        }
    }
        return -1;
    
}
};
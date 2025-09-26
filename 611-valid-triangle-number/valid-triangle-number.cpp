class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        int n=arr.size(),count = 0;
        sort(arr.begin(),arr.end()) ;
        if(n<3)return 0;
        for(int i=n-1;i>=2;i--){
            int a=arr[i],j=i-1,k=0;
            while(k<j){
                if(arr[k] + arr[j]>a){
                    count+=(j-k);
                    j-- ;
                }
                else k++;
            }
        }
        return count ; 
    }
};
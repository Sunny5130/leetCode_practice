// class Solution {
// public:
//     int findKthNumber(int m, int n, int k) {
//         vector<long long >ans;
//         for(int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 long long x=i*j;
//                 ans.push_back(x);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans[k-1];
//     }
// };
class Solution {
public:
    int findKthNumber(int m,int n,int k){
        int low=1,high=m*n,ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long count=0;
            for(int i=1;i<=m;i++){
                count+=min(n,mid/i);
            }
            if(count>=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};

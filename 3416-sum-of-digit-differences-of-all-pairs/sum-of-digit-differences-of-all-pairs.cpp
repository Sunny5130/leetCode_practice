// class Solution {
// public:
//     long long sumDigitDifferences(vector<int>& nums) {
//         int sum=0;
//         for(int i=0;i<nums.size();i++){
//             int x=nums[i];
//             for(int j=i+1;j<nums.size();j++){
//                 sum+=abs(nums[j]-x);
//             }
//         }
//         return sum;
//     }
// };
class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        vector<vector<long long>> v(12 , vector<long long>(10));
        for(int i=0;i<nums.size();i++) {
            int p=0;
            int x=nums[i];
            while(x){
                v[p][x % 10] +=1;
                x =x/10;
                p=p+1;
        }
    }
        long long res = 0;
        for(int i = 0;i<12;i++) {
            for(int j =0;j<10;j++) {
                for(int k =j+1; k<10;k++) {
                    res += v[i][k] *v[i][j];
                }
            }
        }
        return res;
    }
};
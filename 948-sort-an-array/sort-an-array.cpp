// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n=nums.size();
//         //count the maximum value element of the array
//         int maxi=nums[0];
//         for(int i=0;i<nums.size();i++){
//             maxi=max(nums[i],maxi);
//         }
//         //create new vector of lenght maxi +1 and store frequency then prefix sum of frequency store array
//         vector<int>count(maxi+1,0);
//         for(int i=0;i<n;i++){ //frequency store
//             count[nums[i]]++;
//         }
//         for(int i=1;i<=maxi;i++){ //prefix sum
//             count[i]+=count[i-1];
//         }
//         vector<int>output(n);
//         for(int i=n-1;i>=0;i--){
//             output[--count[nums[i]]]=nums[i];
//         }
//         return output;
//     }
// };

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int range = mx - mn + 1;
        vector<int> count(range, 0);
        for (int num : nums) {
            count[num - mn]++;
        }
        for (int i = 1; i < range; i++) {
            count[i] += count[i - 1];
        }
        vector<int> output(n);
        for (int i = n - 1; i >= 0; i--) {
            output[--count[nums[i] - mn]] = nums[i];
        }

        return output;
    }
};

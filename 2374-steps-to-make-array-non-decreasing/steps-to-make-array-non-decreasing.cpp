class Solution {
public:
//     bool sortarray(vector<int>ans){
//         bool flag=true;
//         for(int i=1;i<ans.size();i++){
//             if(ans[i-1]>ans[i])flag=false;
//         }
//             if(flag==false)return false;
//             return true;
//     }
//     vector<int>decres(vector<int>&nums){
//         vector<int>res;
//         res.push_back(nums[0]);
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]>nums[i]){
//                 continue;
//             }else{
//                 res.push_back(nums[i]);
//             }
//         }
//         return res;
//     }
//     int totalSteps(vector<int>& nums) {
//         int count=0;
//         while(!sortarray(nums)){
//             nums=decres(nums);
//             count++;
//         }
//         return count;
//     }
// };
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        vector<int> steps(n, 0);
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int maxSteps = 0;
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                maxSteps = max(maxSteps, steps[st.top()]);
                st.pop();
            }
            if (!st.empty()) steps[i] = maxSteps + 1;
            ans = max(ans, steps[i]);
            st.push(i);
        }
        return ans;
    }
};

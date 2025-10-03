class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        int maxi = temp[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (temp[i] >= maxi) {
                maxi = temp[i];
                ans[i] = 0;
            } else {
                int days = 1;
                while (temp[i + days] <= temp[i]) {
                    days += ans[i + days];
                }
                ans[i] = days;
            }
        }
        return ans;
    }
};

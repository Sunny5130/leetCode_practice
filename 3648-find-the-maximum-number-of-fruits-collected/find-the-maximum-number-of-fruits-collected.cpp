class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n = fruits.size();
        int diagonal = 0;
        for (int i = 0; i < n; ++i)
            diagonal += fruits[i][i];
        for (int i = 0; i < n - 2; ++i) {
            fruits[i][n - 2 - i] = 0;
            fruits[i][n - 3 - i] = 0;
        }
        fruits[n - 2][0] = 0;
        for (int i = 1; i < n - 1; ++i) {
            int start_j = max(i + 1, n - i - 1);
            for (int j = start_j; j < n; ++j) {
                fruits[i][j] += max({
                    fruits[i - 1][j - 1],
                    fruits[i - 1][j],
                    (j + 1 < n) ? fruits[i - 1][j + 1] : 0
                });
            }
        }
        for (int j = 1; j < n - 1; ++j) {
            int start_i = max(j + 1, n - j - 1);
            for (int i = start_i; i < n; ++i) {
                fruits[i][j] += max({
                    fruits[i - 1][j - 1],
                    fruits[i][j - 1],
                    (i + 1 < n) ? fruits[i + 1][j - 1] : 0
                });
            }
        }
        return diagonal + fruits[n - 2][n - 1] + fruits[n - 1][n - 2];
    }
};

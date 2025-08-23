class Solution {
public:
    int minimumArea(vector<vector<int>>& grid, int u, int d, int l, int r) {
        int n = grid.size();
        int m = grid[0].size();
        int rmax = 0,cmax = 0;
        int rmin = n,cmin = m;
        for (int i = u; i <= d; i++) {
            for (int j = l; j <= r; j++) {
                if (grid[i][j] == 1) {
                    rmax = max(rmax, i);
                    rmin = min(rmin, i);
                    cmax = max(cmax, j);
                    cmin = min(cmin, j);
                }
            }
        }
        return (rmax - rmin + 1) * (cmax - cmin + 1);
    }

    int solve(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = n * m;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                res = min(res, minimumArea(grid, 0, i, 0, j) +
                                   minimumArea(grid, 0, i, j + 1, m - 1) +
                                   minimumArea(grid, i + 1, n - 1, 0, m - 1));
                res = min(res, minimumArea(grid, 0, i, 0, m-1) +
                                   minimumArea(grid, i+1, n-1, 0, j) +
                                   minimumArea(grid, i + 1, n - 1, j+1, m - 1));
            }
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                res = min(res, minimumArea(grid, 0, i, 0, m - 1) +
                                   minimumArea(grid, i + 1, j, 0, m - 1) +
                                   minimumArea(grid, j + 1, n - 1, 0, m - 1));
            }
        }
        return res;
    }
    // rotating the grid by 90 degrees
    vector<vector<int>> rotate90(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[m - j - 1][i] = grid[i][j];
            }
        }
        return ans;
    }
    int minimumSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> revgrid = rotate90(grid);
        return min(solve(grid), solve(revgrid));
    }
};
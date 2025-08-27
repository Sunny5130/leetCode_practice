class Solution {
public:
    int lenOfVDiagonal(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        if (n == 0)return 0;
        int m = grid[0].size();
        int max_len = 0;
        const int dr[] = {1, 1, -1, -1};
        const int dc[] = {1, -1, -1, 1};
        auto get_path_len = [&](int r, int c, int direction_idx,
            int start_val) -> int {
            int len = 0;
            int current_r = r;
            int current_c = c;
            int current_val = start_val;

            while (current_r >= 0 && current_r < n && current_c >= 0 &&
                   current_c < m && grid[current_r][current_c] == current_val) {
                len++;
                current_r += dr[direction_idx];
                current_c += dc[direction_idx];
                current_val = (current_val == 2) ? 0 : 2;
            }
            return len;
        };

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    max_len =max(max_len, 1);

                    for (int d = 0; d < 4; ++d) {
                        int r1 = i + dr[d];
                        int c1 = j + dc[d];

                        if (r1 >= 0 && r1 < n && c1 >= 0 && c1 < m &&
                            grid[r1][c1] == 2) {
                            int straight_len = 1 + get_path_len(r1, c1, d, 2);
                            max_len =max(max_len, straight_len);

                            int current_r = r1;
                            int current_c = c1;
                            int current_val = 2;

                            for (int k = 0; k < straight_len - 1; ++k) {
                                int next_dir_idx = (d + 1) % 4;
                                int val_after_turn = (current_val == 2) ? 0 : 2;

                                int path2_len =get_path_len(current_r + dr[next_dir_idx],
                                                 current_c + dc[next_dir_idx],
                                                 next_dir_idx, val_after_turn);
                                max_len =max(max_len, (k + 2) + path2_len);
                                current_r += dr[d];
                                current_c += dc[d];
                                current_val = (current_val == 2) ? 0 : 2;
                            }
                        }
                    }
                }
            }
        }
        return max_len;
    }
};
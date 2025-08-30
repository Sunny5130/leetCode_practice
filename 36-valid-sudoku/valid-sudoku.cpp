class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i =0;i<9;i++){
            for (int j =0;j<9;j++) {
                if (!check(board,i,j)) return false;
            }
        }
        return true;
    }
    bool check(vector<vector<char>>& board,int i,int j){
        if (board[i][j] =='.') return true;
        char cur =board[i][j];
        pair<int,int> curBlock = {i / 3*3,j / 3*3};
        // check block
        for (int r =curBlock.first;r<curBlock.first+3;r++) {
            for (int l =curBlock.second;l<curBlock.second +3;l++) {
                if (r==i && l==j) continue;
                if (board[r][l] == cur) return false;
            }
        }
        // check col
        for (int c = 0;c<9; ++c) {
            if (c == j)continue;
            if (board[i][c] == cur) return false;
        }
        // check row
        for (int r =0;r<9;++r) {
            if (r == i) continue;
            if (board[r][j] ==cur) return false;
        }
        return true;
    }
};
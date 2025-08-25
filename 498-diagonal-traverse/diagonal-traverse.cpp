class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> ans;
        int row=0,col=0;
        int cnt=0;
        int parity=0; // for reversing
        while(cnt < m*n){
            int i=row,j=col;
            vector<int> temp;
            while(i>=0 && j<n){
                temp.push_back(mat[i--][j++]);
                cnt++;
            }
            if(parity++%2) reverse(temp.begin(),temp.end());
            if(row<m-1) row++;
            else col++;
            for(int it:temp) ans.push_back(it);
        }
        return ans;
    }
};
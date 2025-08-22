class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int mxrow=0,mxcol=0;
        int mnrow=INT_MAX,mncol=INT_MAX;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    mxrow=max(mxrow,i);
                    mnrow=min(mnrow,i);
                    mxcol=max(mxcol,j);
                    mncol=min(mncol,j);
                }
            }
        }
        return (mxrow-mnrow+1)*(mxcol-mncol+1);
    }
};
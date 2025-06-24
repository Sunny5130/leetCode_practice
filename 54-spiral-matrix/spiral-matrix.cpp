class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        int count=0;
        int total=row*col;

        int srow=0;
        int scol=0;
        int lrow=row-1;
        int lcol=col-1;
        while(count<total){
            //first row
            for(int i=scol;count<total && i<=lcol;i++){
                ans.push_back(matrix[srow][i]);
                count++;
            }
            srow++;
            //last column
            for(int i=srow;count<total && i<=lrow;i++){
                ans.push_back(matrix[i][lcol]);
                count++;
            }
            lcol--;
            //last row
            for(int i=lcol;count<total && i>=scol;i--){
                ans.push_back(matrix[lrow][i]);
                count++;
            }
            lrow--;
            //first column
            for(int i=lrow;count<total && i>=srow;i--){
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
        }
        return ans;
    }
};
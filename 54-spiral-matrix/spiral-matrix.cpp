class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        int count=0;
        int total=row*col;

        int frow=0;
        int fcol=0;
        int lrow=row-1;
        int lcol=col-1;
        while(count < total){
        //first row
        for(int i=fcol;count<total && i<=lcol;i++){
            ans.push_back(matrix[frow][i]);
            count++;
        }
        frow++;
        //lastcolumn
        for(int i=frow;count<total && i<=lrow;i++){
            ans.push_back(matrix[i][lcol]);
            count++;
        }
        lcol--;
        //last row
        for(int i=lcol;count<total && i>=fcol;i--){
            ans.push_back(matrix[lrow][i]);
            count++;
        }
        lrow--;
        //first col
        for(int i=lrow;count<total && i>=frow;i--){
            ans.push_back(matrix[i][fcol]);
            count++;
        }
        fcol++;
        }
        return ans;
    }
};
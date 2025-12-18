class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int total=r*c;
        int fr=0,fc=0,lr=r-1,lc=c-1;
        int count=0;
        vector<int>ans;
        while(count<total){
            //first row
            for(int i=fc; count<total && i<=lc;i++){
                ans.push_back(matrix[fr][i]);
                count++;
            }
            fr++;
            //last column
            for(int i=fr;count<total && i<=lr;i++){
                ans.push_back(matrix[i][lc]);
                count++;
            }
            lc--;
            //last row
            for(int i=lc;count<total && i>=fc;i--){
                ans.push_back(matrix[lr][i]);
                count++;
            }
            lr--;
            //first column
            for(int i=lr;count<total && i>=fr;i--){
                ans.push_back(matrix[i][fc]);
                count++;
            }
            fc++;
        }
        return ans;
    }
};
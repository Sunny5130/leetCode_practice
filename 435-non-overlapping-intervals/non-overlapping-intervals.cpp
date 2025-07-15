class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& vals){
        if(vals.empty()) return 0;
        int n=vals.size();
        int count=0;
        // sort(vals.begin(),vals.end());
          sort(vals.begin(),vals.end(),[](vector<int>& a,vector<int>& b){
            return a[1]<b[1];
        });
            int lastindx=vals[0][1];
            for(int i=1;i<vals.size();i++){
                if(vals[i][0]<lastindx){
                    count++;
                }else{       
                lastindx=vals[i][1];
            }
        }
        return count;
    }
};

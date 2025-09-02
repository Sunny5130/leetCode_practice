class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] == b[0] ? a[1] > b[1] : a[0] < b[0];
        });
        const int n = points.size();
        int res = 0;
        for(int i = 0;i<n;i++){
            int y1 = points[i][1], last = -1;
            for(int j = i+1;j<n;j++){
                int y2 = points[j][1];
                if(y2 <= y1 && y2 >last){
                    last = y2;
                    ++res;
                }
            }
        }
        return res;
    }
};
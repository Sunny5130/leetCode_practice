class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
    if(k==0 || n>= k+maxPts)return 1.0;
    vector<double> dp(n + 1, 0.0);
    double winsum=0;
    
    for(int i=k;i<k+maxPts;++i){
        if (i<=n){
            winsum+=1;
            dp[i]=1.0;
        }
    }
    for(int i=k-1;i>=0;--i){
        double remove=0.0;
        dp[i]=winsum*(1.0/maxPts);
        if(i+maxPts<=n){
            remove=dp[i+maxPts];
        }
        winsum+=dp[i]-remove;
    }
    return dp[0];
    }
};
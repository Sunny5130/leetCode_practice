class Solution {
public:
    int totalMoney(int n) {
        int count=0,mon=0,sum=0;
        for(int i=1;i<=n;i++){
            if(count==7){
                mon=(i/7)+1;
                count=0;
            }else{
                mon++;
            }
            sum+=mon;
            count++;
        }
        return sum;
    }
};
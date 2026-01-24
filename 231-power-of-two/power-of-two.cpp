class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
            int digit=pow(2,i);
            if(digit==n){
                return true;
            }
        }
        return false;
    }
};
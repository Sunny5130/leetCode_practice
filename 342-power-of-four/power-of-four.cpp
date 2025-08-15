// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if(n==1)return true;
//         if(n%4==0){
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isPowerOfFour(int n) {
        long long pow = 1;
        while(pow<=n){
            if(pow==n){
                return true;
            }else{
                pow = pow * 4;
            }
        }
        return false;
    }
};
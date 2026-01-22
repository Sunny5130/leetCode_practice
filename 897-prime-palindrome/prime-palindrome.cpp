// class Solution {
// public:
//     bool rev(int n){
//         int ans=n;
//         int res=0;
//         while(n!=0){
//             res=res*10+n%10;
//             n=n/10;
//         }
//         return ans==res;
//     }
//     bool pali(int &n){
//         if(n<2)return false;
//         if(n%2==0)return false;
//         bool flag=true;
//         for(int i=3;i*i<=n;i+=2){
//             if(n%i==0){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true){
//             if(rev(n)==true)return true;
//             else return false;
//         }
//         return false;
//     }
//     int primePalindrome(int n) {
//         if(n==1)return 2;
//         if(n==2)return 2;
//         while(n){
//             if(pali(n)){
//                 return n;
//             }
//             n++;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool rev(int n){
        int ans = n;
        int res = 0;
        while(n != 0){
            res = res * 10 + n % 10;
            n = n / 10;
        }
        return ans == res;
    }

    bool pali(int &n){
        if(n < 2) return false;
        if(n % 2 == 0) return n == 2;

        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return rev(n);
    }

    int primePalindrome(int n) {
        if (n <= 11) {
            if (n <=2) return 2;
            if (n <=3) return 3;
            if (n <=5) return 5;
            if (n <=7) return 7;
            return 11;
        }
        if(n % 2 == 0) n++;

        while(true){
            int len = to_string(n).length();
            if(len % 2 == 0){
                n = pow(10, len) + 1;
                continue;
            }
            if(pali(n)){
                return n;
            }
            n += 2;
        }
    }
};

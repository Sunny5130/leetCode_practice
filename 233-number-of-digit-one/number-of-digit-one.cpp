class Solution {
public:
//     int countt(int n){
//         int count=0;
//         while(n!=0){
//             int r=n%10;
//             if(r==1)count++;
//             n=n/10;
//         }
//         return count;
//     }
    // int countDigitOne(int n) {
//         int total=0;
//         for(int i=1;i<=n;i++){
//             int x=countt(i);
//             total+=x;
//         }
//         return total;
//     }
// };

    int countDigitOne(int n) {
        long long count = 0;
        long long i = 1; 
        long long num = n;

        while (num / i != 0) {
            long long high = num / (i * 10); 
            long long cur = (num / i) % 10; 
            long long low = num % i;        
            if (cur == 0)
                count += high * i;
            else if (cur == 1)
                count += high * i + low + 1;
            else
                count += (high + 1) * i;

            i *= 10; 
        }
        return count;
    }
};

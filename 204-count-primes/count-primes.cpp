class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; 
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;  
        for (long long j = (long long)i * i; j < n; j += i){
                    isPrime[j] = false; 
                }
            }
        }
        return count;
    }
};

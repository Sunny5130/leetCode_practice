class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        long long a = 1, b = 1;
        while (b<=k) {
            long long temp =a+b;
            a=b;
            b=temp;
        }
        int count = 0;
        while (k>0){
            if (a<=k) {
                k -=a;
                count++;
            }
            long long temp =b-a;
            b =a;
            a =temp;
        }
        return count;
    }
};

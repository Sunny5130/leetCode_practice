class Solution {
public:
    long long flowerGame(int n, int m) {
        long long eN =n/2;
        long long oN =(n+1)/2;
        long long eM =m/2;
        long long oM =(m+1)/2;
        return eN*oM + oN*eM;
    }
};
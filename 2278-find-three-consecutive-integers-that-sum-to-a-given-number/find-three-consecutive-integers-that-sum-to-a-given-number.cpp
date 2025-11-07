class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        //x-1,x,x+1 the some of these terms be 3x
        // num=3x
        // x=num/3
        if(num%3 !=0)return {};
        long long x=num/3;
        return{x-1,x,x+1};
    }
};
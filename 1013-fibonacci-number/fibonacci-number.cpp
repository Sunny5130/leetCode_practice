class Solution {
public:
    int fib(int n) {
    //----------------------------iterative------------------//
        // if(n==0 )return 0;
        // if(n==1)return 1; 
        // int a=0;
        // int b=1;
        // int res;
        // for(int i=2;i<=n;i++){
        //     res=a+b;
        //     a=b;
        //     b=res;
        // }
        // return res;
    //---------------------------recursion-------------------//
    if(n==0 ||n==1)return n;
    return fib(n-1) + fib(n-2);
    }
};
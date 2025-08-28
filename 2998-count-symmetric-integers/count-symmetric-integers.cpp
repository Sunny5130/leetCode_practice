class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int num=low;num<=high;num++){
            string s=to_string(num);
            int n=s.size();
            if(n %2!=0)continue;//odd length wale nahi lene hai
            int sum1=0,sum2=0;
            int half=n/2;
            for(int i=0;i<half;i++)sum1+=s[i]-'0';
            for(int i=half;i<n;i++)sum2+=s[i]-'0';
            if(sum1==sum2)count++;
        }
        return count;
    }
};
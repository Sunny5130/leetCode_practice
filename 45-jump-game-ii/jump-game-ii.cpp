class Solution {
public:
    int jump(vector<int>& nums) {
        int l=0,r=0,jump=0;;
        while(r < nums.size()-1){
            int forw=0;
            for(int i=l;i<=r;i++){
                forw=max(i+nums[i],forw);
            }
            l=r+1;
            r=forw;
            jump++;
        }
        return jump;
    }
};
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int bob=0,alice=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int p=0;
            while(nums[i]!=0){
                p++;
                nums[i]/=10;
            }
            if(p==1){
                bob+=x;
            }else{
                alice+=x;
            }
        }
        int total=bob+alice;
        return (bob>total-bob) ||(alice >total-alice);
    }
};
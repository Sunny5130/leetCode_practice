class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        vector<int>assume=nums;
        sort(assume.begin(),assume.end());
        int l=(n-1)/2;
        int r=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=assume[l--];
            }else{
                nums[i]=assume[r--];
            }
        }
    }
};
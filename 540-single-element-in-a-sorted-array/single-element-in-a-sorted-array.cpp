class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //-------------------first approach(Linear search)-----------------------//    
        // int x=0;
        // for(int i=0;i<nums.size();i++){
        //     x=x^nums[i];
        // }
        // return x;

    //-------------------second approach(Binary search)-----------------------//    
        // int l=0,r=nums.size()-1;
        // while(l<r){
        //     int mid=(l+r)/2;
        //     if(mid%2!=0)mid--;
        //     if(nums[mid]==nums[mid+1]){
        //         l=mid+2;
        //     }else{
        //         r=mid;
        //     }
        // }
        // return nums[l];
    //-------------------Third approach(using extra space)-----------------------//    
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)map[nums[i]]++;
        for(auto it=map.begin();it!=map.end();it++){
            if(it->second==1)return it->first;
        }
        return 0;
    }
};
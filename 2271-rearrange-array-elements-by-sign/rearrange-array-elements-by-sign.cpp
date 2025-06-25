class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int>ans,pos,neg;
	for(int i=0;i<nums.size();i++){
		if(nums[i]>0){
			pos.push_back(nums[i]);
		}else{
			neg.push_back(nums[i]);
		}
	}
    int a=pos.size();
	for(int i=0;i<a;i++){
		ans.push_back(pos[i]);
		ans.push_back(neg[i]);
	}
	return ans;
    }
};
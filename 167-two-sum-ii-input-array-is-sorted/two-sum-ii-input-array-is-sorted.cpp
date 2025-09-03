class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            int count=numbers[i]+numbers[j];
            if(count==target)return{i+1,j+1};
            else if(count<target)i++;
            else j--;
        }
        return{0,0};
    }
};
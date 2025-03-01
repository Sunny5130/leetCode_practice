class Solution {
public:
    vector<int> applyOperations(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                arr[i]*=2;
                arr[i+1]=0;
            }
        }
        vector<int> result;
        for(int num : arr) {
            if(num != 0) result.push_back(num);
        }
        while(result.size() < arr.size()) {
            result.push_back(0);
        }

        return result;
    }
};
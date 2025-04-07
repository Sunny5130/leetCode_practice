#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int, int> pref;
        pref[0] = 1; 
        int count = 0, sum = 0;
        
        for (int i=0;i<arr.size();i++) {
            sum += arr[i];
            if (pref.find(sum - k) != pref.end()) {
                count += pref[sum - k];
            }
            pref[sum]++;
        }
        return count;
    }
};

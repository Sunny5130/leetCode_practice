class Solution {
public:
    int maxFrequencyElements(vector<int>& nums){
        vector<int> freq(101, 0);
        for (int num : nums){
            freq[num]++;
        }
        int maxi = *max_element(freq.begin(),freq.end());
        int total = 0;
        for (int f : freq) {
            if (f == maxi) total += f;
        }
        return total;
    }
};

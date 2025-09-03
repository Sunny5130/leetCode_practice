class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        vector<pair<char, int>> freqVec(freq.begin(), freq.end());
        sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
            return a.second > b.second; 
        });
        string result;
        for (auto &[ch, count] : freqVec) {
            result.append(count, ch); 
        }
        return result;
    }
};
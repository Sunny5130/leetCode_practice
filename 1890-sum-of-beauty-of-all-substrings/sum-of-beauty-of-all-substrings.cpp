class Solution {
public:
    int beautySum(string s) {
        int n = s.size(), total = 0;
        for(int i = 0; i < n; i++){
            int freq[26] = {0};
            for(int j = i; j < n; j++){
                freq[s[j]-'a']++;
                int mini = 501, maxi = 0;
                for(int k = 0; k < 26; k++)
                    if(freq[k]){
                        mini = min(mini, freq[k]);
                        maxi = max(maxi, freq[k]);
                    }
                total += (maxi - mini);
            }
        }
        return total;
    }
};

// class Solution {
// public:
//     int largestInteger(int num) {
//         string s=to_string(num);
//         vector<int>odd;
//         vector<int>even;
//         for(int i=0;i<s.length();i++){
//             if(i%2==0)even.push_back(nums[i]-'0');
//             else odd.push_back(nums[i]-'0');
//         }
//         sort(even.begin(),even.end());
//         sort(odd.begin(),odd.end());
//         int i=0,j=0;
//         string res="";
//         while(i<odd.size()&& j<even.size()){
//             res+=even[i++]+'0';
//             res+=odd[j++]+'0';
//         }
//         int q=stoi(res);
//         return q;
//     }
// };
class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<int> odd, even;

        for (char c : s) {
            int digit = c - '0';
            if (digit % 2 == 0)
                even.push_back(digit);
            else
                odd.push_back(digit);
        }
        sort(even.rbegin(), even.rend());
        sort(odd.rbegin(), odd.rend());

        int o = 0, e = 0;
        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';
            if (digit % 2 == 0)
                s[i] = '0' + even[e++];
            else
                s[i] = '0' + odd[o++];
        }

        return stoi(s);
    }
};

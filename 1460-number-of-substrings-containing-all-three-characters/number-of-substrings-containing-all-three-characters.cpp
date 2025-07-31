// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         unordered_map<char, int> mpp;
//         int i = 0, j = 0;
//         int ans = 0;
//         int n = s.length() - 1;
//         while (j <= n) {
//             mpp[s[j]]++;
//             while (mpp.size() == 3) {
//                 ans += (n - j + 1); 
//                 mpp[s[i]]--;       
//                 if (mpp[s[i]] == 0)
//                     mpp.erase(s[i]);
//                 i++;
//             }
//             j++; 
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int a=-1,b=-1,c=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a=i;
            }
            else if(s[i]=='b'){
                b = i;
            }
            else{
                c=i;
            }
            if(a !=-1 & b !=-1 && c!=-1){
                int index =min(a,min(b,c));
                count +=(index+1);
            }
        }
        return count;
    }
};
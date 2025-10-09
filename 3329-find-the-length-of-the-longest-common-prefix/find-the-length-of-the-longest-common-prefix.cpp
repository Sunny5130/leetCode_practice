class Solution {
public:
    // int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
//         int a=arr1.size();
//         int b=arr2.size();
//         int maxi=0;
//         for(int i=0;i<a;i++){
//             string s1=to_string(arr1[i]);
//             for(int j=0;j<b;j++){
//                 int count=0;
//                 string s2=to_string(arr2[j]);
//                 while(count<(int)s1.size() && count<(int)s2.size() && s1[count]==s2[count]){
//                     count++;
//                 }
//                 maxi=max(count,maxi);
//             }
//         }
//         return maxi;
//     }
// };

    int getLength(int num) {
        int c = 0;
        while(num != 0) {
            num /= 10;
            c += 1;
        }
        return c;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> p;
        for(int i = 0; i < arr2.size(); i++) {
            int temp = arr2[i];
            while(temp != 0) {
                p[temp] += 1;
                temp /= 10;
            }
        }
        int ans = 0;
        for(int i = 0; i < arr1.size(); i++) {
            int temp = arr1[i];
            while(temp != 0) {
                if(p.find(temp) != p.end()) {
                    ans = max(ans, getLength(temp));
                }
                temp /= 10;
            }
        }
        return ans;
    }
};

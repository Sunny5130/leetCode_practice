class Solution {
public:
//     vector<int>first(vector<int>res){
//         vector<int>ans;
//         for(int i=1;i<res.size();i+=2){
//             ans.push_back(res[i]);
//         }
//         return ans;
//     }
//     vector<int>second(vector<int>res){
//         vector<int>ans;
//         for(int i=res.size()-2;i>=0;i-=2){
//             ans.push_back(res[i]);
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
    int lastRemaining(int n) {
//         vector<int>res;
//         for(int i=1;i<=n;i++){
//             res.push_back(i);
//         }
//         int count=0;
//         while(res.size()!=1){
//         if(count%2==0){
//             res=first(res);
//             count++;
//         }else{
//             res=second(res);
//             count++;
//         }
//         }
//     return res[0];
//     }
// }
    int head = 1;
    int step = 1;
    bool left = true;
    while(n>1){
        if(left || n%2 ==1)head +=step;
        n /=2;
        step *=2;
        left = !left;
    }
    return head;
    }
};

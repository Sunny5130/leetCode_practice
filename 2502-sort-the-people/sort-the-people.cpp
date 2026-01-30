class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>ans;
        vector<string>res;
        for(int i=0;i<names.size();i++){
            ans.push_back({names[i],heights[i]});
        }
        sort(ans.begin(),ans.end(),[&](auto a,auto b){
            return a.second >b.second;
        });
        for(int i=0;i<ans.size();i++){
            res.push_back(ans[i].first);
        }
        return res;
    }
};
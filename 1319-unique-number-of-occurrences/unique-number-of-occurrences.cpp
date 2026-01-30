class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        for(int i=0;i<arr.size();i++)map[arr[i]]++;
        set<int>set;
        for(auto it=map.begin();it!=map.end();it++){
            if(set.count(it->second))return false;
            set.insert(it->second);
            cout<<it->second<<" ";
        }
        return true;
    }
};
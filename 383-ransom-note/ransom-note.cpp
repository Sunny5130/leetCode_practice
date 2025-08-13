class Solution {
public:
    bool canConstruct(string a, string b){
        unordered_map<int,int>map;
        for(int i=0;i<b.length();i++){
            map[b[i]]++;
        }
        for(int i=0;i<a.length();i++){
            if(map[a[i]]>0){
                map[a[i]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};




class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s =to_string(n);
        sort(s.begin(),s.end());
        for(int i=0;i<31;i++){
            int check=1<<i;
            string ns=to_string(check);
            sort(ns.begin(),ns.end());
            if(ns==s){
                return true;
            }
        }
        return false;
    }
};
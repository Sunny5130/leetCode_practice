class Solution {
public:
    string sortVowels(string s) {
        map<char,int> mp;
        char c[10]={'a','e','i','o','u','A','E','I','O','U'};
        for(auto it :c){
            mp[it]++;
        }
        vector<int> ind;
        vector<char> vw;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]){
                ind.push_back(i);
                vw.push_back(s[i]);
            }
        }
        sort(vw.begin(),vw.end());
        for(int i=0;i<ind.size();i++)
        {
            s[ind[i]]=vw[i];
        }

        return s;
    }
};
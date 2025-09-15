class Solution {
public:
    int canBeTypedWords(string text,string brokenLetters){
        vector<bool>broken(26,false);
        int ans =0;
        for(char x : brokenLetters)broken[x-'a'] =true;
        for(int i=0;i<text.size();i++){
            bool found = false;
                while(i<text.size() && text[i]!=' '){
                         if(broken[text[i]-'a'])found = true;
                         i++;
                }
            if(!found)ans++;
        }
        return ans;
    }
};

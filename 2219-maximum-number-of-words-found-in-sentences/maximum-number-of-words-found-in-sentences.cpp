class Solution {
public:
    int mostWordsFound(vector<string>& sent) {
        int gmaxi=0;
        for(int i=0;i<sent.size();i++){
            string s=sent[i];
            int count=1;
            for(int i=0;i<s.length();i++){
                if(s[i]==' '){
                    count++;
                }
            }
            gmaxi=max(count,gmaxi);
        }
        return gmaxi;
    }
};
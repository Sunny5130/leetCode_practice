class Solution {
public:
    long long countVowels(string word) {
        int n=word.length();
        long long count=0;
            for(int j=0;j<n;j++){
                if(word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'){
                count += (long long)(j + 1) * (n - j);
                }
        }
        return count;
    }
};

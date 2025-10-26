class Solution {
public:
    bool isBalanced(int num) {
        string s =to_string(num);
        vector<int>count(10,0);
        for (char c : s)
            count[c - '0']++;
        for (char c : s){
            int d = c - '0';
            if (count[d] !=d)
                return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int x =n+1;
        while(true){
            if (isBalanced(x))
                return x;
            x++;
        }
    }
};
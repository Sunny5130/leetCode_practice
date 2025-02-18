class Solution {
public:
    string largestOddNumber(string &num) {
        while(!empty(num) && (num.back()-'0') % 2 == 0){
            num.pop_back();
        }
        return move(num);
    }
};
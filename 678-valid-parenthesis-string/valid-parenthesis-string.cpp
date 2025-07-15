class Solution {
public:
    bool checkValidString(string s) {
        int low=0, high=0;
        for(char ch : s){
            if(ch=='('){
                low++;
                high++;
            }else if(ch==')'){
                if(low>0) low--;
                high--;
            }else{ // '*'
                if(low>0) low--;
                high++;
            }
            if(high<0) return false;
        }
        return low==0;
    }
};

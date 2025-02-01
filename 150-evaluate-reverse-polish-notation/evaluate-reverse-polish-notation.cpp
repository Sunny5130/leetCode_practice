class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i][0]) || (s[i].size() > 1 && s[i][0] == '-')) {  
                st.push(stoi(s[i])); 
                  }
            else {
                int op1 = st.top();
                st.pop();
                int op2 = st.top(); 
                st.pop();
            
                if (s[i] == "+"){
                    st.push(op2 + op1);
                }else if (s[i] == "-"){
                    st.push(op2 - op1);
                }else if (s[i] == "*"){
                    st.push(op2 * op1);
                }else if (s[i] == "/"){
                    st.push(op2 / op1);
            }
        }
    }
        return st.top();
    }
};

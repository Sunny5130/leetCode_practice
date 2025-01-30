#include<iostream>
#include<stack>
using namespace std;
bool validParenthesis(string s,int size){
    stack<char> st;
    bool ans=true;
    for(int i=0;i<size;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
          
          st.push(s[i]);
        
        }else if(s[i]==')'){
            if(st.top()=='(' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break; 
            }
        }
        else if(s[i]=='}'){
            if(st.top()=='{' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break; 
            }
        }
        else if(s[i]==']'){
            if(st.top()=='[' && !st.empty()){
                st.pop();
            }else{
                ans=false;
                break; 
            }
        }

    }
    return st.empty();

}

int main(){
    string s="{([])}";
bool valid = validParenthesis(s, s.size());
    cout<<valid<<endl;
}
class Solution {
public:
    string reverseParentheses(string s) {
     stack<int>st;
     for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(i);
        if(s[i]==')'){
            int j=st.top();st.pop();
            reverse(s.begin()+j,s.begin()+i);
        }
     }   
     erase(s,'(');
     erase(s,')');
     return s;
    }
};
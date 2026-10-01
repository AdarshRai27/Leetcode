class Solution {
public:
    bool isValid(string s) {
        stack<char> l;
     for(auto x: s){
        if(x=='('||x=='{'||x=='[') l.push(x);
        else{
            if(l.empty()) return false;
            if(x==')'&&l.top()!='(') return false;
            else if(x==']'&&l.top()!='[') return false;
            else if(x=='}'&&l.top()!='{') return false;
            l.pop();
        }
     }
     return l.empty();
   
    }
};
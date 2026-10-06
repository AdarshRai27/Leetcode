class Solution {
public:
    int minAddToMakeValid(string s) {
        int op=0,cl=0;
        for(auto x:s){
            if(x=='(')op++;
            else if(x==')'&&op>0)op--;
            else {
                op=0;cl++;
            }
        }
        return abs(op+cl);
    }
};
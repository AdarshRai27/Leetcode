class Solution {
public:
    int maxDepth(string s) {
        int ans=0,curr=0;
        //stack<int>st;
        for(auto x:s){
            if(x=='(')curr++;
            if(x==')')curr--;
            ans=max(ans,curr);
        }
        return ans;
    }
};
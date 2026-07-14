class Solution {
public:
    void solve(int i,int n,int k,string &s,vector<string>&ans,int cost,int last){
        if(cost>k)return;
        if(i==n){
            ans.push_back(s);
            return;
        }
        s.push_back('0');
        solve(i+1,n,k,s,ans,cost,0);
        s.pop_back();
        if(last==0){
            s.push_back('1');
            solve(i+1,n,k,s,ans,cost+i,1);
            s.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;
        string s="";
        int cost=0,last=0,i=0;
        solve(i,n,k,s,ans,cost,last);
        return ans;
    }
};
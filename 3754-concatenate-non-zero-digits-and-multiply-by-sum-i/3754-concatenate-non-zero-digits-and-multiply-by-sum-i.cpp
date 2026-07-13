class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n),dig="";
        int sum=0;
        for(auto x:s){
            if(x=='0')continue;
            else{
                sum+=x-'0';
                dig+=x;
            }
        }
        if(dig.empty())return 0;
        long long num=stoll(dig);
        long long ans=num*(long long)sum;
        return ans;
        
    }
};
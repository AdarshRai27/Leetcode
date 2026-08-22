class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,t=n;
        while(t>0){
            sum+=t%10;prod*=t%10;
            t=t/10;
        }
        return !(n%(sum+prod));
    }
};
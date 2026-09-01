class Solution {
public:
    const long long M = 1e9 + 7;
    long long power(long long x,long long y) {
        long long ans=1;
        x%=M;
        while(y) {
            if(y%2)
                ans=(ans*x)%M;
            x=(x*x)%M;
            y/=2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        int n=nums.size();
        long long res=0;
        for(int i=0;i<n;i++) {
            long long w=nums[i]%10;
            long long d=nums[i]/10;
            int len=0;
            long long temp=d;
            while(temp>0) {
                len++;
                temp/=10;
            }
            long long divisor=1;
            for(int k=0;k<len-w;k++)
                divisor*=10;
            long long x=d/divisor;
            long long y=d%divisor;
            res=(res+power(x,y))%M;
        }
        return (int)res;
    }
};
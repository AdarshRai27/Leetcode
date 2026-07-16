class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=INT_MIN;vector<int>Gcd;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            Gcd.push_back(gcd(mx,nums[i]));
        }
        sort(Gcd.begin(),Gcd.end());
        long long sum=0;
        for(int i=0,j=Gcd.size()-1;i<j;i++,j--)sum+=gcd(Gcd[i],Gcd[j]);
        return sum;
    }
};
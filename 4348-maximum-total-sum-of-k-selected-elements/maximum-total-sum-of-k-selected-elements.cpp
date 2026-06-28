class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        long long int sum=0;
        int i=nums.size()-1,t=k;
        while(mul>1&&t>=1){
                long long ans = (long long)nums[i] *mul;
                sum+=ans;
                mul--;
                i--;
                t--;
            }
        int rem=nums.size()-k;
        for(int j=i;j>=rem;j--){
            sum+=nums[j];
        }
        return sum;
    }
};
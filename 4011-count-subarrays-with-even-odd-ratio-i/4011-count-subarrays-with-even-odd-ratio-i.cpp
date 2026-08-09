class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int e=0,o=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0)e++;
                else o++;
                if(o>0){
                    //float c=e/o;
                    if(b*e<=a*o)ans++;
                }
            }
        }
        return ans;
    }
};
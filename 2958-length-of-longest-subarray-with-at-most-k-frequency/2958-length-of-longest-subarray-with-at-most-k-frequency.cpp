class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>fr;
        int ans=0;
        for(int l=0,r=0;r<nums.size();r++){
            fr[nums[r]]++;
            if(fr[nums[r]]<=k)ans=max(ans,r-l+1);
            else {
                while(l<=r&&fr[nums[r]]>k){
                    fr[nums[l]]--;
                    l++;
                    //ans=max(l,r-l+1);
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx=INT_MIN;
      for(int i=0;i<nums.size();i++){
          int mn=nums[i];
          mx=max(nums[i],mx);
          for(int j=i;j<nums.size();j++){
              mn=min(mn,nums[j]);
          }
          if(mx-mn<=k) return i;
      }  
        return -1;
    }
};

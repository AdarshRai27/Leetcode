class Solution {
public:
    int maximumLengthSubstring(string nums) {
         unordered_map<int,int>fr;
        int ans=0;
        for(int l=0,r=0;r<nums.size();r++){
            fr[nums[r]]++;
            if(fr[nums[r]]<=2)ans=max(ans,r-l+1);
            else {
                while(l<=r&&fr[nums[r]]>2){
                    fr[nums[l]]--;
                    l++;
                    //ans=max(l,r-l+1);
                }
            }
        }
        return ans;
    }
};
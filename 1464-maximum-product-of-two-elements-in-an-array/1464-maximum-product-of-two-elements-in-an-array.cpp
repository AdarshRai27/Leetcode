class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int lar1=INT_MIN,lar2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=lar1){
                lar2=lar1;
                lar1=nums[i];
            }
            if(nums[i]>lar2&&nums[i]<lar1)lar2=nums[i];
        }
        return (lar1-1)*(lar2-1);
    }
};
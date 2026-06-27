class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int removed_max=INT_MIN,n=nums.size();
        //k=min(k,n);
        if((nums.size()==1&&k%2==1)||nums.size()==0)return -1;
        if(k<=n){
            for(int i=0;i<k-1;i++){
            removed_max=max(removed_max,nums[i]);
           // nums.erase(nums.begin());
        }
        return max(removed_max,nums[(k)%n]);
        }
        return *max_element(nums.begin(),nums.end());
    }
};
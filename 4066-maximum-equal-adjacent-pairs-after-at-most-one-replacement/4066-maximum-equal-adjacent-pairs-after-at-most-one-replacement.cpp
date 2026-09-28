class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int,int>,int>adj;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                if(adj[{nums[i+1],nums[i]}]>0)adj[{nums[i+1],nums[i]}]++;
                else adj[{nums[i],nums[i+1]}]++;
            }     
            else ans++;
        }
        int mx=0;
        for(auto it:adj)mx=max(mx,it.second);
        return  ans+mx;
    }
};
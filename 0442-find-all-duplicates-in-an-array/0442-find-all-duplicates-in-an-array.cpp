class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>fr;
        for(auto x:nums)fr[x]++;
        for(auto it:fr)if(it.second==2)ans.push_back(it.first);
        return ans;

    }
};
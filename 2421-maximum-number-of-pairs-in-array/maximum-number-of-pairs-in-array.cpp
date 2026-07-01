class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pairs=0,left=0;
        vector<int>freq(101,0);
        for(int i=0;i<nums.size();i++)freq[nums[i]]++;
        for(auto x:freq){
            pairs+=x/2;
            left+=x%2;
        }
        return {pairs,left};
    }
};
class Solution {
public:
    vector<vector<int>>sub(vector<int>&nums, vector<int>&a, int i) {
        vector<vector<int>>ans;
        if(i==nums.size()){
            ans.push_back({a});
            return ans;
        }
        a.push_back(nums[i]);
        vector<vector<int>> left=sub(nums,a,  i+1);
        a.pop_back();
        vector<vector<int>> right=sub(nums,a,  i+1);//sub(nums, a,  i+1);
        //return ans;
        ans.insert(ans.end(), left.begin(), left.end());
        ans.insert(ans.end(), right.begin(), right.end());
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>n;
        vector<vector<int>>st=sub(nums,n,0);
        return st;
    }
};
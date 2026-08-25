class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pr;
        for(auto x : nums){
            pr.push(x);
            if(pr.size()>k)pr.pop();
        }      
        return pr.top();
    }
};
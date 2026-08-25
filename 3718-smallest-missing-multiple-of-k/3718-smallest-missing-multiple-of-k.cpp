class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_map<int,int>fr;
       for(auto x:nums)fr[x]++;
       int i=k;
       while(fr[i]>0){
        i+=k;
       } 
       return i;
    }
};
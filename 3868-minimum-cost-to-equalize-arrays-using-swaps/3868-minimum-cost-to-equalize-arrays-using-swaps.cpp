class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>f1,f2;
       for(auto x:nums1)f1[x]++;for(auto x:nums2)f2[x]++;
       int diff=0;
       set<int>s;
       for(auto it:f1){
        s.insert(it.first);
        if((it.second+f2[it.first])%2==1)return -1;
        diff+=abs((it.second-f2[it.first]));
       }
       for(auto it:f2){
        if(s.count(it.first))continue;
        
           if((it.second+f1[it.first])%2==1)return -1; 
        
        diff+=abs((it.second-f1[it.first]));
       }
       return diff/4;
    }
};
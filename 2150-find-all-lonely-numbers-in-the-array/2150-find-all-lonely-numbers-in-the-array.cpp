class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>lonely;
        unordered_map<int,int>fr;
        for(auto x:nums)fr[x]++;
        for(auto it:fr){
            int a=it.first,b=it.second;
            if(b==1&&(!fr.count(a-1)&&!fr.count(a+1)))lonely.push_back(a);
        }
        return lonely;
    }
};
class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<int,int>sums;
        for(auto x:planks)
            sums[x]++;
        unordered_map<int,int>width;
        vector<int>vals;
        for(auto &[x,cnt]:sums)
            vals.push_back(x);
        for(int i=0;i<vals.size();i++){
            int a=vals[i];
            if(sums[a]>=2)
                width[2*a]+=sums[a]/2;
            for(int j=i+1;j<vals.size();j++){
                int b=vals[j];       
                width[a+b]+=min(sums[a],sums[b]);
            }
        }
        for(auto &[x,cnt]:sums)
            width[x]+=cnt;        
        int ans=0;
        for(auto &[x,cnt]:width)
            ans=max(ans,cnt);       
        return ans;
    }
};
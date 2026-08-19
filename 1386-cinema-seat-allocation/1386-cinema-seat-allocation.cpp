class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        unordered_map<int,unordered_set<int>>mp;
        for(auto &r:rs){
            mp[r[0]].insert(r[1]);
        }
        int ans=2*n;
        for(auto &[row,seats]:mp){
            bool a=true,b=true,c=true;
            for(int x=2;x<=5;x++){
                if(seats.count(x)){
                    a=false;
                    break;
                }
            }
            for(int x=4;x<=7;x++){
                if(seats.count(x)){
                    b=false;
                    break;
                }
            }
            for(int x=6;x<=9;x++){
                if(seats.count(x)){
                    c=false;
                    break;
                }
            }
            if(!a&&!b&&!c)
                ans-=2;
            else if(!a||!b||!c)
                ans--;
        }
        return ans;
    }
};
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>v(3,-1);
        int total=0;
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
            total+=min(min(v[0],v[1]),v[2])+1;
        }
        return total;
    }
};
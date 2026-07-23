class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        unordered_map<string,int>f1,f2;
        int len=s.size()/k;
        for(int i=0;i<s.size();i+=len){
            f1[s.substr(i,len)]++;
            f2[t.substr(i,len)]++;
        }
        return f1==f2;
    }
};
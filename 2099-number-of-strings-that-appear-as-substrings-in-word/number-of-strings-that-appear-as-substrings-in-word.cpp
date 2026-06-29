class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(int x=0;x<patterns.size();x++){
            string t=patterns[x];
            if(word.find(t)!=string::npos)ans++;
        }
        return ans;
    }
};
class Solution {
public:
    char repeatedCharacter(string s) {
       vector<int>f(26,0);
       for(auto x:s){
        f[x-'a']++;
        if(f[x-'a']>1)return x;
       } 
       return 'a';
    }
};
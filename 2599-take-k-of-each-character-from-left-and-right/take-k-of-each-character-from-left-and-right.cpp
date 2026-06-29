class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int>freq(3,0),keep(3,0);
        for(auto x:s)freq[x-'a']++;
        for(int i=0;i<3;i++) {
            if(freq[i]<k)return -1;
            freq[i]-=k;
        }
        int ans=0,l=0;
        for(int i=0;i<s.length();i++){
            keep[s[i]-'a']++;
            while(l<=i&&keep[s[i]-'a']>freq[s[i]-'a'])keep[s[l++]-'a']--;
            ans=max(ans,i-l+1);
        }
        return s.size()-ans;

    }
};
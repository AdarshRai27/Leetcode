class Solution {
public:
    long long countVowels(string s) {
        long long ans=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')ans += (long long)(i + 1) * (n - i);
        }
        return ans;
    }
};
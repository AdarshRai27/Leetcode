class Solution {
public:
    int longest(string s, int k, char c){
        int ans=0,t=k;
        for(int i=0,j=0;i<s.size();i++){
            if(s[i]!=c){
                t--;   
            }
            while(t<0){
                if(s[j]!=c)t++;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        // if(ans>s.size())return s.size();
        return ans;
    }
    int characterReplacement(string s, int k) {
        // if(k==0)return 1;
        int l=0;
        for(int i=0;i<26;i++){
            char c='A'+i;
            l=max(longest(s,k,c),l);
        }
        return l;
    }
};
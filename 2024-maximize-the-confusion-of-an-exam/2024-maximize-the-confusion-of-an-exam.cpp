class Solution {
public:
    int len(string s, int k, char c){
        int ans=0,curr=0;
        for(int j=0,i=0;i<s.size();i++){
            if(s[i]!=c){
                curr++;
            }
            while(curr>k){
                if(s[j]!=c)curr--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string s, int k) {
        return max(len(s,k,'T'),len(s,k,'F'));
    }
};
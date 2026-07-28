class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>fr(26,0);
        int odd;bool o=false;
        for(auto x:s)fr[x-'a']++;
        string palin="";
        for(int i=0;i<26;i++){
            if(fr[i]%2==0)palin+=string(fr[i]/2, 'a'+i);
            if(fr[i]%2==1){
                odd=i;o=true;
                palin+=string(fr[i]/2, 'a'+i);
            }
        }
        string rev=palin;
        reverse(rev.begin(),rev.end());
        if(o)palin+='a'+odd;
        palin+=rev;
        return palin;
    }
};
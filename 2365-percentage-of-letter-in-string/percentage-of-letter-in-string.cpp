class Solution {
public:
    int percentageLetter(string s, char letter) {
        int f=0;
        for(int i=0;i<s.size();i++)if(s[i]==letter)f++;
        return((f*100)/s.size());
    }
};
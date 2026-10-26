class Solution {
public:
    int num_days(string s){
        int md[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string temp="";
        temp+=s[0];temp+=s[1];
        int mon=stoi(temp);
        temp="";
        temp+=s[3];temp+=s[4];
        int ans=0;
        for(int i=0;i<mon-1;i++) ans+=md[i];
        ans+=stoi(temp);
        return ans;
    }
    int countDaysTogether(string s1, string s2, string s3, string s4) {
        
        int ac=num_days(s1),al=num_days(s2),bc=num_days(s3),bl=num_days(s4);
        return max(0,(min(al,bl)-max(ac,bc))+1);
        
    }
};
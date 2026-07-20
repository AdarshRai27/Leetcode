class Solution {
public:
    int reverse(int x) {
        bool neg=false;
        string s=to_string(x);
        if(x<0){
            neg=true;s=s.substr(1);
        }
        std::reverse(s.begin(), s.end());
        string rev="";
        int i=0;
        while(i < s.size() && s[i] == '0')i++;
        for(i;i<s.size();i++)rev+=s[i];
        if(rev.empty())return 0;
        long long check=stoll(rev);
        if(check>INT_MAX||-1*check<INT_MIN)return 0;
        int ans=stoi(rev);
        if(neg)return -ans;
        return ans; 
    }
};
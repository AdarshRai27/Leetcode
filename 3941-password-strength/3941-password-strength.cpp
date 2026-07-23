class Solution {
public:
    int passwordStrength(string password) {
        vector<int>low(26,0),upp(26,0),num(10,0);
        unordered_map<char,int>special;
        for(auto x:password){
            if(x>='a'&&x<='z')low[x-'a']++;
            else if(x>='A'&&x<='Z')upp[x-'A']++;
            else if(x>='0'&&x<='9')num[x-'0']++;
            else special[x]++;
        }
        long long str=0;
        for(int i=0;i<26;i++)if(low[i]>=1)str+=1;
        for(int i=0;i<26;i++)if(upp[i]>=1)str+=2;
        for(int i=0;i<10;i++)if(num[i]>=1)str+=3;
        for(auto it:special)if(it.second>=1)str+=5;
        return str;
    }
};
class Solution {
public:
     void attop(string &s, vector<vector<char>>& mat, int n, int col, int &curr){
        for(int i=0;i<n && curr<s.size();i++)
            mat[i][col]=s[curr++];
    }
    void atbot(string &s, vector<vector<char>>& mat, int n, int col, int &curr){
        for(int i=n-2,j=col;i>0 && curr<s.size();i--,j++)
            mat[i][j]=s[curr++];
    }
    string convert(string s, int n) {
        if(n==1) return s;
        vector<vector<char>> mat(n, vector<char>(s.size(), '0'));
        int curr=0,col=0;
        while(curr<s.size()){
            attop(s,mat,n,col,curr);
            col++;
            atbot(s,mat,n,col,curr);
            col+=n-2;
        }
        string ans="";
        for(int i=0;i<n;i++)
            for(int j=0;j<mat[0].size();j++)
                if(mat[i][j]!='0')
                    ans+=mat[i][j];
        return ans;
    }
};
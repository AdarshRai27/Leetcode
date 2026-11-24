class Solution {
public:
    void dfs(int i, int j, vector<vector<char>> &grid,vector<vector<bool>> &vis, int m, int n ){
        
        if(i>=n||j>=m||i<0||j<0||vis[i][j]==true||grid[i][j]=='0')return;
        vis[i][j]=true;
        dfs(i+1,j,grid,vis,m,n);
        dfs(i-1,j,grid,vis,m,n);
        dfs(i,j+1,grid,vis,m,n);
        dfs(i,j-1,grid,vis,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands=0, n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&vis[i][j]!=true){
                    dfs(i,j,grid,vis,m,n);
                    islands++;
                }
                
            }
        }
        return islands;
    }
};
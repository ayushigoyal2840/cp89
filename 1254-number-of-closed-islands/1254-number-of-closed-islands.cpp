class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j,vector<vector<bool>>&vis,int n,int m)
    {
        if(i<0 or i>=n or j<0 or j>=m or grid[i][j]==1 or vis[i][j]==true)
            return ;
        vis[i][j]=true;
        dfs(grid,i-1,j,vis,n,m);
        dfs(grid,i+1,j,vis,n,m);
        dfs(grid,i,j-1,vis,n,m);
        dfs(grid,i,j+1,vis,n,m);
        
    }
    int closedIsland(vector<vector<int>>& grid) {
        int tot=0;
        int corner=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=false;
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0 and vis[i][j]==false)
                {
                    tot++;
                    dfs(grid,i,j,vis,grid.size(),grid[0].size());
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=false;
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0 and vis[i][j]==false and (i==0 or i==n-1 or j==0 or j==m-1))
                {
                    corner++;
                    dfs(grid,i,j,vis,grid.size(),grid[0].size());
                }
            }
        }
        return tot-corner;
        
    }
};
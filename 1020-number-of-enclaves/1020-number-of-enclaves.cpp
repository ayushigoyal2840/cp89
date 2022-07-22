class Solution {
public:
    int tot=0,count=0;
    void dfs(int i,int j,int n,int m ,vector<vector<int>>& grid, vector<vector<bool>>&vis)
    {
        
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0 or vis[i][j]==true)
            return ;
        vis[i][j]=true;
        tot+=1;
        // cout<<"hi"<<'\n';
        dfs(i,j+1,n,m,grid,vis);
        dfs(i,j-1,n,m,grid,vis);
        dfs(i-1,j,n,m,grid,vis);
        dfs(i+1,j,n,m,grid,vis);
        
    }
     void dfss(int i,int j,int n,int m ,vector<vector<int>>& grid, vector<vector<bool>>&vis)
    {
        
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==0 or vis[i][j]==true)
            return ;
        vis[i][j]=true;
        count+=1;
        // cout<<"hi"<<'\n';
        dfss(i,j+1,n,m,grid,vis);
        dfss(i,j-1,n,m,grid,vis);
        dfss(i-1,j,n,m,grid,vis);
        dfss(i+1,j,n,m,grid,vis);
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        // int tot=0,count=0;
        // vector<vector<int>>adj;
        
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
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 and vis[i][j]==false)
                {
                    dfs(i,j,n,m,grid,vis);
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
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 and vis[i][j]==false and (i==0 or j==0 or i==n-1 or j==m-1))
                {
                    dfss(i,j,n,m,grid,vis);
                }
            }
        }
        return tot-count;
    }
};
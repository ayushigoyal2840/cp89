class Solution {
public:
    int dfs(vector<vector<int>>&grid, vector<vector<bool>>& vis, int r,int c,int i,int j)
    {
        if(i<0 or j<0 or i>=r or j>=c or grid[i][j]==0 or vis[i][j]==true)
            return 0;
        vis[i][j]=1;
        return 
        1+dfs(grid,vis,r,c,i-1,j) +dfs(grid,vis,r,c,i+1,j) +dfs(grid,vis,r,c,i,j-1)+dfs(grid,vis,r,c,i,j+1) ;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c = grid[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        int ans = 0;
        for(int i=0;i<grid.size();i++)
        {
            int aa = 0;
            for(int j=0;j<c;j++)
            {
                if(vis[i][j]==0)
                {
                    aa =  dfs(grid,vis,r,c,i,j);
                }
                ans=max(ans,aa);
            }
            // cout<<endl;
        }
        return ans;
    }
};
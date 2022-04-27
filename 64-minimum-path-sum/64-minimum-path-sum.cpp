class Solution {
public:
    int dp[201][201];
    int dfs(int i,int j,int rows,int col,vector<vector<int>>&grid)
    {
        if(i<0 or j<0 or i>=rows or j>=col)
            return 500000;
        if(i==rows-1 and j==col-1)
            return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=min(dfs(i+1,j,rows,col,grid),dfs(i,j+1,rows,col,grid))+grid[i][j];
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
        memset(dp,-1,sizeof(dp));
       return  dfs(0,0,rows,col,grid);
    }
};
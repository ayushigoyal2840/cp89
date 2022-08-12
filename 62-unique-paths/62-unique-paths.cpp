class Solution {
public:
    int f(int m,int n,vector<vector<int>>&dp,int i,int j)
    {
      if(i==m-1 and j==n-1)
          return 1;
        if(i>=m or j>=n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=  f(m,n,dp,i+1,j)+f(m,n,dp,i,j+1);
        
    }
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m,n,dp,0,0);
        
    }
};
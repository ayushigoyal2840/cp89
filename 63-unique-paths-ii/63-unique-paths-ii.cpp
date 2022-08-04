class Solution {
public:
    vector<vector<int>>dp;
    int f(int i,int j,vector<vector<int>>& o,vector<vector<int>>& dp)
    {
        if(i<0 or j<0)
            return 0;
        if(o[i][j]==1)
            return 0;
        if(i==0 and j==0)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int up=0,down=0;
       up = f(i-1,j,o,dp);
         down = f(i,j-1,o,dp);
        return dp[i][j]=up+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int n=o.size();
        int m=o[0].size();
        dp.resize(n,vector<int>(m,-1));
        // dp[0][0]=1;
        return f(n-1,m-1,o,dp);
        
    }
};
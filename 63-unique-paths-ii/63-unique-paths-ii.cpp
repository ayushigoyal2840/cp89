class Solution {
public:
   
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int n=o.size();
        int m=o[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(o[i][j]==1)
                    dp[i][j]=0;
                else if(i==0 and j==0)
                    dp[i][j]=1;
                else
                {
                    int up=0,down=0;
                   if(i>0)  up = dp[i-1][j];
                   if(j>0)  down=dp[i][j-1];
                    dp[i][j]=up+down;
                }
            }
        }
        return dp[n-1][m-1];
        
    }
};
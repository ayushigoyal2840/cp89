class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[i].size();j++)
            {
              if(matrix[i][j]==1)
              {
                   if(i!=0 and j!=0)
               {
                   dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
               }
                else
                {
                    dp[i][j]=1;
                }
              }
                else
                {
                    dp[i][j]=0;
                }
                
            }
            
        }
        int ans =0;
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[i].size();j++)
            {
                if(dp[i][j]!=0)
                {
                    ans+=dp[i][j];
                }
            }
        }
        return ans;
    }
};
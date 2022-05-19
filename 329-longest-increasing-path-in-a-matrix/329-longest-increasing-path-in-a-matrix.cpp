class Solution {
public:
    int dp[201][201];
    int dfs(vector<vector<int>>& matrix,int i,int j,int n,int m,int par)
    {
        int a1=0,a2=0,a3=0,a4=0;
        if(i>=n or j>=m or i<0 or j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i>0 and par>matrix[i-1][j] )
        {
          a1=  dfs(matrix,i-1,j,n,m,matrix[i-1][j]);
        }
        if(i<n-1 and par>matrix[i+1][j])
        {
           a2= dfs(matrix,i+1,j,n,m,matrix[i+1][j]);
        }
        
        if(j>0 and par>matrix[i][j-1])
        {
          a3=  dfs(matrix,i,j-1,n,m,matrix[i][j-1]);
        }
        
        if(j<m-1 and par>matrix[i][j+1])
        {
           a4= dfs(matrix,i,j+1,n,m,matrix[i][j+1]);
        }
        
        return dp[i][j]=1+max(a1,max(a2,max(a3,a4)));
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        memset(dp,-1,sizeof(dp));
        int maxii=INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                maxii=max(maxii,dfs(matrix,i,j,n,m,matrix[i][j]));
                
            }
        }
        return maxii;
    }
};
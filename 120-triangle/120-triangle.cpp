class Solution {
public:
    int dp[201][201];
    int dfs(int i,int j,vector<vector<int>>& triangle)
    {
        // if(i<0 or j<0 or i>=r or j>=c)
        //     return 10000001;
        
        if(i==triangle.size()-1)
            return triangle[i][j];
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        return dp[i][j]=min(dfs(i+1,j,triangle),dfs(i+1,j+1,triangle))+triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
               // int r=triangle.size();
               // int c=triangle[triangle.size()-1].size();
          return  dfs(0,0,triangle);
    }
};
class Solution {
public:
    int f(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if(i==triangle.size()-1)
            return triangle[i][j];
        
        if(i==triangle.size())
            return INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=INT_MAX,down=INT_MAX;
        if(i<triangle.size()-1) 
            up = triangle[i][j] + f(i+1,j,triangle,dp);
        if(i<triangle.size()-1 and j<triangle.size()-1)
            down = triangle[i][j] + f(i+1,j+1,triangle,dp);
        return dp[i][j] = min(up,down);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,0,triangle,dp);
    }
};
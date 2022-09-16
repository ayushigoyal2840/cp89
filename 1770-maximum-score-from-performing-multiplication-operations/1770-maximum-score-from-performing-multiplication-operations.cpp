class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int n,int j,vector<int>&nums,vector<int>&multi)
    {
        if(j==multi.size())
            return 0;
        if(dp[i][j]!=INT_MIN)
            return dp[i][j];
        int left = solve(i+1,n,j+1,nums,multi)+(nums[i]*multi[j]);
        int right = solve(i,n,j+1,nums,multi)+(nums[(n-1)-(j-i)]*multi[j]);
        return dp[i][j]=max(left,right);
    }
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        int n=nums.size();
        int m=multi.size();
        dp.resize(m+1,vector<int>(m+1,INT_MIN));
        return solve(0,n,0,nums,multi);
    }
};
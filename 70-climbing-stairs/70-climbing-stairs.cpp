class Solution {
public:
    int dp[46]={0};
    int climbStairs(int n) {
        if(n==0) 
        {
            dp[n]=1;
            return 1;
        }
        if(n==1)
        {
            dp[n]=1;
            return 1;
        }
        if(dp[n]!=0)
        {
            return dp[n];
        }
        int ans = climbStairs(n-1)+climbStairs(n-2);
        return dp[n]=ans;
    }
};
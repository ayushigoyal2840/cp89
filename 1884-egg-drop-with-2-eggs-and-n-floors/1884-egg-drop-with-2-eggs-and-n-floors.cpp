class Solution {
public:
    int dp[1001]={};
    int twoEggDrop(int n) {
        if(dp[n]==0)
            for(int i=1;i<=n;i++)
            {
                dp[n]=min(dp[n]==0 ? n : dp[n],1+max(i-1,twoEggDrop(n-i)));
            }
        return dp[n];
    }
};
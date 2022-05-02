class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];
        if(n==0) return 0;
        if(n==1) return 5;
        else
        {
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    if(i==0 or j==0)
                        dp[i][j]=1;
                    else
                        dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[n][4];
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<s.size();i++)
        {
            dp[i][i]=1;
        }
        int start=0;
        int ans=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                 dp[i][i+1]=1;
            start=i;
            ans=2;
            }
           
        }
        for(int k=3;k<=n;k++)
        {
            for(int i=0;i<n-k+1;i++)
            {
                int j=i+k-1;
                if(dp[i+1][j-1]==1 and s[i]==s[j])
                {
                    dp[i][j]=1;
                    if(k>ans)
                    {
                        ans=k;
                        start=i;
                    }
                }
            }
        }
        string fina="";
        for(int i=start;i<start+ans;i++)
            fina+=s[i];
        return fina;
    }
};
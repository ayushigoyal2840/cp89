class Solution {
public:
    int solve(vector<int> & dp, int i,string s)
    {
        int n=s.size();
        if(dp[i]!=-1) return dp[i];
        if(i==n) return dp[i]=1;
        if(s[i]=='0') return dp[i]=0;
        
        int ans = solve(dp,i+1,s);
        if(i!=n-1 and ((s[i]=='1') or (s[i]=='2' and s[i+1]<='6')))
        {
            ans+=solve(dp,i+2,s);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        int n=s.size();
        if(n==1) return 1;
        int ans = 0;
        vector<int> dp(n+1,-1);
        return solve(dp,0,s);
    }
};
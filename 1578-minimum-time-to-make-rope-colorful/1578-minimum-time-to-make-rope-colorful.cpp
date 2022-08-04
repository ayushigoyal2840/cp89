class Solution {
public:
    int f(int i,int prev, string& colors,vector<int>& need,vector<vector<int>>&dp)
    {
        
       if(i==0)
       {
           if(colors[i]-'a'==prev)
               return need[i];
           return 0;
       }
        if(dp[i][prev]!=-1)
            return dp[i][prev];
         int include=1e8,exclude=1e8;
        exclude=need[i]+f(i-1,prev,colors,need,dp);
        if(colors[i]-'a' != prev)
        {
            include=f(i-1,colors[i]-'a',colors,need,dp);
        }
        return dp[i][prev]= min(include,exclude);
    }
    int minCost(string colors, vector<int>& neededTime) {
        
        int n=colors.size();
        vector<vector<int>>dp(n+1,vector<int>(27,-1));
        return f(n-1,26,colors,neededTime,dp);
        
    }
};
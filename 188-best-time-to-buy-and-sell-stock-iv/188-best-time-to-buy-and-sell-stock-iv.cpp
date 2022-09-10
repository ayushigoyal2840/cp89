class Solution {
public:
    int solve(int n,int cap,vector<int>& prices, vector<vector<vector<int>>>&dp,int ind,int buy)
    {
        if(ind==n or cap==0)
            return 0;
        if(dp[ind][buy][cap]!=-1)
            return dp[ind][buy][cap];
        int profit;
        if(buy==0)
            profit = max(solve(n,cap,prices,dp,ind+1,0),-prices[ind]+solve(n,cap,prices,dp,ind+1,1));
        if(buy==1)
            profit=max(solve(n,cap,prices,dp,ind+1,1),prices[ind]+solve(n,cap-1,prices,dp,ind+1,0));
        
        return dp[ind][buy][cap]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(n,k,prices,dp,0,0);
    }
};
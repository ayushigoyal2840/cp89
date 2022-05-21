class Solution {
public:
    int fun(vector<int> &coins,int amount,int idx,vector<vector<int>> &dp)
    {
        if(idx==0)
        {
            if(amount%coins[0]==0) return amount/coins[0];
            else return 1e9; 
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        
        int notTake = fun(coins,amount,idx-1,dp);
        int take = INT_MAX;
        if(coins[idx]<=amount)
        {
            take = 1+fun(coins,amount-coins[idx],idx,dp);
        }
        return dp[idx][amount] = min(notTake,take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans =  fun(coins,amount,n-1,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};
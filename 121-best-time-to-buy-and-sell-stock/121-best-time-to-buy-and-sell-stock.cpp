class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        int ans = INT_MIN;
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<m)
            {
                m=prices[i];
            }
            ans = max(ans,prices[i]-m);
        }
        if(prices.size()==1) return 0;
        return ans;
    }
};
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>maxi)
            {
                maxi=candies[i];
            }
        }
        
        vector<bool> ans;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+e >= maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
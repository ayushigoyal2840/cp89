class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int>& ds, vector<int>& can,int target ,int start)
    {
        if(target<0)
            return ;
        if(target==0)
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=start;i<can.size();i++)
        {
            ds.push_back(can[i]);
            solve(ans,ds,can,target-can[i],i);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(ans,ds,can,target,0);
        return ans;
    }
};
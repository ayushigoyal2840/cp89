class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj , vector<bool>& vis)
    {
        vis[node]=true;
        for(auto it: adj[node])
        {
            if(vis[it]==false)
            {
                dfs(it,adj,vis);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
    vector<vector<int>> adj(isConnected.size(),vector<int>(isConnected[0].size(),0));
        for(int i=0;i<isConnected.size();i++)
        {
            // cout<<"hi"<<endl;
            for(int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j]==1 and i!=j)
                {
                    // cout<<"hi";
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    // cout<<"hi"<<endl;
                }
            }
        }
        int ans=0;
        vector<bool>vis(isConnected.size(),false);
        for(int i=0;i<isConnected.size();i++)
        {
            if(vis[i]==false)
            {
                dfs(i,adj,vis);
                // cout<<i<<endl;
                ans++;
            }
        }
        return ans;
    }
};
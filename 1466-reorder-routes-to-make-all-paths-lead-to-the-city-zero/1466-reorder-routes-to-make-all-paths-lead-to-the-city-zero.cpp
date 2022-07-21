class Solution {
public:
    int ans = 0;
    void dfs(int node, int par, vector<vector<int>>& adj, vector<vector<int>>&out,vector<bool>&vis)
    {
        vis[node]=true;
        if(par!=-1)
        {
            if(find(out[node].begin(),out[node].end(),par)==out[node].end())
                ans++;
                
        }
      for(auto child : adj[node])
      {
          if(!vis[child])
          {
              dfs(child,node,adj,out,vis);
          }
      }
            
    }
    int minReorder(int n, vector<vector<int>>& connections) {
       vector<vector<int>>adj(n);
        vector<vector<int>>out(n);
        vector<bool>vis(n,false);
        for(int i=0;i<connections.size();i++)
        {
            int a,b;
            a=connections[i][0];
            b=connections[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            out[a].push_back(b);
        }
        dfs(0,-1,adj,out,vis);
        return ans;
    }
};
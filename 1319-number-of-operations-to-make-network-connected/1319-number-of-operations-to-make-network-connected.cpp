class Solution {
public:
    int cc=0;
    void dfs(vector<int> adj[],int node,vector<bool>& vis)
    {
        vis[node]=true;
        for(auto it:adj[node])
        {
            if(vis[it]==false)
            {
                dfs(adj,it,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int vertices=connections.size();
        if(n>(vertices+1))
            return -1;
        vector<int>adj[100001];
        vector<bool>vis(vertices,false);
        
        for(int i=0;i<vertices;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i=0;i<vertices;i++)
        {
            cout<<i<<" ";
            for(auto it : adj[i])
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                dfs(adj,i,vis);
                cc++;
            }
            // dfs(adj,i);/
        }
        cout<<"connected components are"<<cc<<endl;
        cout<<"vertices are"<<vertices<<endl;
        int need=cc-1;
        int actual=n-1;
        if(cc==1) return 0;
        return cc-1;
        // return 0;
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        int edges=connections.size();
        if(edges<n-1)
        {
            return -1;
        }
        vector<int>adj[100001];
        vector<bool>vis(100001,false);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        int cc=0;
        queue<int>q;
        // q.push(0);
        for(int i=0;i<n;i++)
        {
            
            if(!vis[i])
            {
                    cc++;
                    vis[i]=true;
                    q.push(i);
                while(!q.empty())
                {
                    int temp=q.front();
                    q.pop();
                    for(auto it:adj[temp])
                    {
                        if(!vis[it])
                        {
                            vis[it]=true;
                            q.push(it);
                        }
                    }
                    // q.pop();
                }
            }
        }
        return cc-1;
    }
};
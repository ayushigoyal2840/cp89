// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int node,vector<bool>& vis,vector<int>& dist,vector<vector<int>> &adj)
    {
        vis[node]=true;
        
        for(auto it:adj[node])
        {
            if(vis[it]==false)
            {
                vis[it]=true;
                dist[it]=1+dist[node];
                dfs(it,vis,dist,adj);
            }
        }
    }
    int partyHouse(int n, vector<vector<int>> &adj){
       
       
       vector<int >fina;
       for(int i=1;i<=n;i++)
          {
              vector<int>dist(n+1);
              vector<bool> vis(n+1,false);
              if(vis[i]==false)
              dfs(i,vis,dist,adj);
              int cc=0;
              for(int i=1;i<=n;i++)
              {
                  cc=max(dist[i],cc);
                  
              }
              fina.push_back(cc);
              for(int i=1;i<=n;i++)
              {
                //   cout<<dist[i]<<" ";
                  dist[i]=0;
              }
            //   cout<<endl;
              vis.clear();
          }
          return *min_element(fina.begin(),fina.end());
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<vector<long long>>adj(n);
        for(int i=0;i<roads.size();i++)
        {
            long long a = roads[i][0];
            long long  b=roads[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        long long  sum=0;
        vector<long long>aa;
        for(int i=0;i<adj.size();i++)
        {
            
            aa.push_back(adj[i].size());
        }
        sort(aa.begin(),aa.end());
        reverse(aa.begin(),aa.end());
        for(int i=0;i<aa.size();i++)
        {
            cout<<aa[i]<<" ";
            sum+=aa[i]*n;
            n--;
        }
        return sum;
    }
};
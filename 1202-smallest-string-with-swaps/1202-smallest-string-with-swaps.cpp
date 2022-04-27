class Solution {
public:
    void sortin(vector<int>& v,string &s)
    {
                // cout<<s<<endl;

        vector<char> vc;
        for(int i=0;i<v.size();i++)
        {
            // cout<<s[v[i]]<<" ";
            vc.push_back(s[v[i]]);
        }
        sort(vc.begin(),vc.end());
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            // cout<<vc[i]<<" ";/
            s[v[i]]=vc[i];
        }
        // cout<<s<<endl;
    }
    void dfs(int node,vector<bool>& vis, vector<int>adj[],vector<int>&v)
    {
        vis[node]=true;
        v.push_back(node);
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                dfs(it,vis,adj,v);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<int> adj[100001];
        vector<bool>vis(s.size(),false);
        for(int i=0;i<pairs.size();i++)
        {
                adj[pairs[i][0]].push_back(pairs[i][1]);
                adj[pairs[i][1]].push_back(pairs[i][0]);
        }
        for(int i=0;i<s.size();i++)
        {
            vector<int> v;
            dfs(i,vis,adj,v);
            sortin(v,s);
            v.clear();
        }
        return s;
    }
};
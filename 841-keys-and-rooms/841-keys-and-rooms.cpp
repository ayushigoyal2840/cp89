class Solution {
public:
    void dfs(int node, vector<vector<int>>&rooms,vector<bool>&vis)
    {
        
        for(auto it : rooms[node])
        {
            if(vis[it]==false)
            {vis[it]=true;
              dfs(it,rooms,vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        vis[0]=true;
        dfs(0,rooms,vis);
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==false)
                return false;
        }
        return true;
    }
};
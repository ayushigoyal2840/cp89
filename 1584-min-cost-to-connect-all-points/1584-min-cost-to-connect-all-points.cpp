typedef pair<int,int> pii;
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pii,vector<pii>,greater<pii>>p;
        p.push({0,0});
        int n=points.size();
        vector<vector<int>> graph(n,vector<int>(n,0));
        int d=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                graph[i][j]=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
            }
        }
        
        int ans=0;
        vector<bool>vis(n,false);
        while(!p.empty())
        {
            int dist=p.top().first;
            int cc=p.top().second;
            p.pop();
            if(vis[cc]) continue;
            ans+=dist;
            vis[cc]=true;
            for(int i=0;i<n;i++)
            {
                if(!vis[i])
                {
                    p.push({graph[cc][i],i});
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    // int dir[4] = {}
    int minCost(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool> (grid[0].size(),false));
        vector<vector<int>> gr(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        deque<pair<pair<int,int>,int>> q;
        q.push_back({{0,0},0});
        while(!q.empty()){
            auto top = q.front();
            q.pop_front();
            int x = top.first.first;
            int y = top.first.second;
            if(visited[x][y]==true)
                continue;
            
            int cost = top.second;
            
            visited[x][y] = true;
            gr[x][y]=min(gr[x][y],cost);
            for(int i=0;i<4;i++){
                int newx = x + dx[i];
                int newy = y + dy[i];
                
                if(newx<0 || newy<0 || newx>=grid.size() || newy>=grid[0].size() or visited[newx][newy]) continue;
                
                if(grid[x][y]-1 == i)
                    q.push_front({{newx,newy},cost});
                else
                    q.push_back({{newx,newy},cost+1});

                    
            }
        }
        return gr[grid.size()-1][grid[0].size()-1];
    }
};
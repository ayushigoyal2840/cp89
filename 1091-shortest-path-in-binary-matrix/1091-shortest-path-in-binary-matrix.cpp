class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        if(grid[0][0]==1 or grid[m-1][n-1]==1) return -1;
        queue<pair<int,int>> q;
        vector<pair<int,int>> dir{{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            int curx = cur.first, cury = cur.second;
            if(curx == m-1 and cury == n-1) return grid[curx][cury];
            for(auto i: dir){
                int x = curx + i.first;
                int y = cury + i.second;
                if(x>=0 and x<m and y>=0 and y<n and grid[x][y]==0){\
                    q.push({x,y});
                    grid[x][y] = grid[curx][cury] + 1; 
                }
            }
        }
        return -1;
    }
};
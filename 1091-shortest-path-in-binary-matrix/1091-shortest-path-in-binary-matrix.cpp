class Solution {
public:
     int dir [8][2] ={
        {0,1}, // right
        {0,-1}, //left
        {1,0}, // down
        {-1,0}, // up
        {1,1},// diagonal bottom right
        {1,-1}, // diagonal up right
        {-1,1}, // diag up left
        {-1,-1} // diag up right
        };
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
       
        
        
        if(grid[0][0]==1 or grid[n-1][n-1]==1) return -1;
        
        queue<vector<int>> q;
        q.push({0,0,1});
        grid[0][0]=1;
        
        while(!q.empty())
        {
            int size=q.size();
            while(size>0)
            {
                vector<int> cell = q.front();
                q.pop();
                
                if(cell[0]==n-1 and cell[1]==n-1) return cell[2];
                
                for(auto d : dir)
                {
                    int r = cell[0] + d[0];
                    int c = cell[1] + d[1];
                    
                    if(r>=0 and c>=0 and r<n and c<n and grid[r][c]==0)
                    {
                        q.push({r,c,cell[2]+1});
                        grid[r][c]=1;
                    }
                }
                size--;
            }
        }
        return -1;
    }
};
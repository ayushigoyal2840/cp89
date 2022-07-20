class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0,r=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                    if(i!=0 and grid[i-1][j]==1) r++;
                    if(j!=0 and grid[i][j-1]==1) r++;
                    if(i<n-1 and grid[i+1][j]==1) r++;
                    if(j<m-1 and grid[i][j+1]==1) r++;
                }
            }
        }
        return 4*count-r;
    }
};
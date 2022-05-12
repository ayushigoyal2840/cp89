// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
    public:
    bool dfs(int i,int j,int row,int col,vector<vector<int>>&grid)
    {
        if(grid[i][j]==2)
        return true;
        int temp = grid[i][j];
        grid[i][j]=0;
        for(int k=0;k<4;k++)
        {
            int x=i+dir[k][0];
            int y=j+dir[k][1];
            if(x>=0 and y>=0 and x<row and y<col and grid[x][y])
            {
                bool ans = dfs(x,y,row,col,grid);
                if(ans)
                {
                    grid[i][j]=temp;
                    return ans;
                }
            }
        }
        
        grid[i][j]=temp;
        return false;
        
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        bool ans = false;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                   ans= dfs(i,j,grid.size(),grid[i].size(),grid);
                   break;
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends
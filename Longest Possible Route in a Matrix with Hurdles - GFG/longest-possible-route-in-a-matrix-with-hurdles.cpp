// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    bool isvalid(int i, int j, int n, int m)
    {
        if(i>=n || j>=m || i<0 || j<0)
        {
            return false;
        }
        return true;
    }
    int helper(vector<vector<bool>>&visited,vector<vector<int>>& matrix, int xs, int ys, int xd, int yd, int n, int m)
    {
        if(xs==xd && ys==yd)
        {
            
            return 0;
        }
        
        visited[xs][ys]=true;
        int di[]={0,0,-1,1};
        int dj[]={-1,1,0,0};
        int mx=-1;
        for(int k=0;k<4;k++)
        {
            int n_i=xs+di[k];
            int n_j=ys+dj[k];
            if(isvalid(n_i,n_j,n,m) && matrix[n_i][n_j]==1 && !visited[n_i][n_j])
            {
                mx=max(mx,helper(visited,matrix,n_i,n_j,xd,yd,n,m));
            }
        }
        visited[xs][ys]=false;
        
        return (mx==-1?mx:1+mx);
    }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        if(matrix[xs][ys]==0)
        {
            return -1;
        }
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        int ans=helper(visited,matrix,xs,ys,xd,yd,n,m);
        
        return ans==-1?-1:ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int solve(vector<vector<int>>&grid,int i,int j,int n,int m)
   {
      if(i+1<n and grid[i+1][j]==1)
      {
          grid[i+1][j]=-1;
          solve(grid,i+1,j,n,m);
      }
      
      if(i-1>=0 and grid[i-1][j]==1)
      {
          grid[i-1][j]=-1;
          solve(grid,i-1,j,n,m);
      }
      
      if(j+1<m and grid[i][j+1]==1)
      {
          grid[i][j+1]=-1;
          solve(grid,i,j+1,n,m);
      }
      
      if(j-1>=0 and grid[i][j-1]==1)
      {
          grid[i][j-1]=-1;
          solve(grid,i,j-1,n,m);
      }
   }
   int dfs(vector<vector<int>>&grid)
   {
       int n=grid.size();
       int m=grid[0].size();
       int ans=0;
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==1)
               {
                   ans++;
                   solve(grid,i,j,n,m);
               }
           }
       }
       
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==-1)
               {
                   grid[i][j]=1;
               }
           }
       }
       return ans;
   }
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &op) {
       vector<vector<int>>grid(n,vector<int>(m,0));
       vector<int>ans;
       for(int i=0;i<op.size();i++)
       {
          grid[op[i][0]][op[i][1]]=1;
          int a = dfs(grid);
          ans.push_back(a);
          
          
       }
       return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends
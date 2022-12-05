//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
 bool isValid(int n, int m, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return false;
        return true;
    }
  public:
    int shotestPath(vector<vector<int>> &mat, int n, int m, int k) {
        // code here
        queue<vector<int>> q;
        q.push({n - 1, m - 1, 0, k});
        vector<vector<int>> vis(n, vector<int>(m, -1));
        int res = n * m;
        while (!q.empty()) {
            vector<int> &temp = q.front();
            int i = temp[0], j = temp[1], d = temp[2], tk = temp[3];
            q.pop();
            if (tk < 0)
                continue;
            else if (i == j && i == 0)
                return d;
            else {
                if (isValid(n, m, i - 1, j) && vis[i - 1][j] < tk - mat[i - 1][j]) {
                    q.push({i - 1, j, d + 1, tk - mat[i - 1][j]});
                    vis[i - 1][j] = tk - mat[i - 1][j];
                }
                if (isValid(n, m, i + 1, j) && vis[i + 1][j] < tk - mat[i + 1][j]) {
                    q.push({i + 1, j, d + 1, tk - mat[i + 1][j]});
                    vis[i + 1][j] = tk - mat[i + 1][j];
                }
                if (isValid(n, m, i, j - 1) && vis[i][j - 1] < tk - mat[i][j - 1]) {
                    q.push({i, j - 1, d + 1, tk - mat[i][j - 1]});
                    vis[i][j - 1] = tk - mat[i][j - 1];
                }
                if (isValid(n, m, i, j + 1) && vis[i][j + 1] < tk - mat[i][j  + 1]) {
                    q.push({i, j + 1, d + 1, tk - mat[i][j + 1]});
                    vis[i][j + 1] = tk - mat[i][j  + 1];
                }
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
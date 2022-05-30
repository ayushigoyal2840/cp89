// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int dp[100][100];
    int helper(vector<vector<int>> &matrix,int i,int j,int prev){
   if(i<0 || j<0 || i==matrix.size() || j==matrix[0].size() || prev>=matrix[i][j])return 0;


   if(dp[i][j]!=-1)return dp[i][j];
   int curr=matrix[i][j];
   int a=0,b=0,c=0,d=0;
   a=1+helper(matrix,i+1,j,curr);
   b=1+helper(matrix,i,j+1,curr);
   c=1+helper(matrix,i-1,j,curr);
   d=1+helper(matrix,i,j-1,curr);
   return dp[i][j]= max({a,b,c,d});
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        memset(dp,-1,sizeof(dp));
        int res=0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp=helper(matrix,i,j,0);
                res=max(res,temp);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
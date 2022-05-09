// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	bool isvalid(int i,int j,int n)
	{
	    if(i<0 or j<0 or i>=n or j>=n)
	    return false;
	    return true;
	}
	double findProb(int n,int x, int y, int steps)
	{
	    vector<pair<int,int>>moves{{-1,2},{-2,1},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
	    vector<vector<double>>curr(n,vector<double>(n,0));
	    curr[x][y]=1;
	    for(int step=1;step<=steps;step++)
	    {
	        vector<vector<double>>next(n,vector<double>(n,0));
	        for(int i=0;i<n;i++)
	        {
	            for(int j=0;j<n;j++)
	            {
	                if(curr[i][j])
	                {
	                    for(auto it : moves)
	                    {
	                        int ni=i+it.first;
	                        int nj=j+it.second;
	                        if(isvalid(ni,nj,n))
	                        next[ni][nj]+=curr[i][j]/8.0;
	                    }
	                }
	            }
	        }
	        curr=next;
	    }
	    double ans=0.0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            ans+=curr[i][j];
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
		int N, start_x, start_y, steps;
		cin >> N >> start_x >> start_y >> steps;
		Solution ob;
		double ans = ob.findProb(N, start_x, start_y, steps);
		cout << fixed << setprecision(6) << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends
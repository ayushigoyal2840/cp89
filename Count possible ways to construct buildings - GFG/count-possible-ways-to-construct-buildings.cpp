// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
public:
int mod=1000000007;
int NW(int N,int i,vector<vector<int>>&dp)
{
    if(N==0)return 1;
    
    if(dp[N][i]!=-1)return dp[N][i];
    
    if(i==0)
    {
        return dp[N][i]= (NW(N-1,1,dp)+NW(N-1,0,dp))%mod;
    }
    else return dp[N][i]= NW(N-1,0,dp);
}
int TotalWays(int N)
{
    // Code here
    vector<vector<int>>dp(N+1,vector<int>(2,-1));
    int t=NW(N,0,dp);
    return (t*1ll*t)%mod;
}
};



// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
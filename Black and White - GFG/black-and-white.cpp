//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
#define ll long long
const int mod = 1e9+7;

long long numOfWays(int n, int m)
{
    ll dir[8][2] = { {-2,1}, {-2,-1}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {1,2}, {1,-2} };
    
    ll total_cells = n*m;
    ll ans = 0;
    
    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            ll cnt = 0;
            for(int k=0; k<8; ++k) {
                ll di = i + dir[k][0];
                ll dj = j + dir[k][1];
                
                if(di >= 0 && di < n && dj >= 0 && dj < m) ++cnt;
            }
            
            ans += ((total_cells - cnt - 1)%mod);
            ans %= mod;
        }
    }
    
    return ans;
}
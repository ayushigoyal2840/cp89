// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int x[], int y[], int n) {
        map<int,int>mpx;
        for(int i=0;i<n;i++)
        {
            mpx[x[i]]++;
        }
        int ans=0;
        int xans=0;
        for(auto it : mpx)
        {
           int f=it.second;
           int af=f*(f-1)/2;
           xans+=af;
        }
        int fina=ans;
        ans=0;
        mpx.clear();
        int yans=0;
        for(int i=0;i<n;i++)
        {
            mpx[y[i]]++;
        }
        // int ans=0;
        for(auto it : mpx)
        {
           int f=it.second;
           int af=f*(f-1)/2;
           yans+=af;
        }
        map<pair<int,int>,int>xy;
        for(int i=0;i<n;i++)
        {
            xy[{x[i],y[i]}]++;
        }
        int xyans=0;
        for(auto it:xy)
        {
            int f=it.second;
           int af=f*(f-1)/2;
           xyans+=af;
            
        }
        return xans+yans-2*xyans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends
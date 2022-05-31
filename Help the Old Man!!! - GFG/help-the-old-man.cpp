// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
void solve(int s,int d,int h,int no,vector<pair<int,int>>&ans)
{
    if(no==1)
    {
        ans.push_back({s,d});
        return ;
    }
    solve(s,h,d,no-1,ans);
    ans.push_back({s,d});
    solve(h,d,s,no-1,ans);
    return ;
}
    vector<int> shiftPile(int no, int n){
          vector<int>v;
          vector<pair<int,int>> ans;
          int s,d,h;
          solve(1,3,2,no,ans);
          v.push_back(ans[n-1].first);
          v.push_back(ans[n-1].second);
          return v;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends
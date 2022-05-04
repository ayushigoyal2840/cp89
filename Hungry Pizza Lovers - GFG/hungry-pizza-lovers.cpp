// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends

bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second==b.second ? a.first < b.first : a.second<b.second;
}
vector<int> permute(vector<vector<int>> &arr, int n)
{
    vector<int> ans;
     vector<pair<int,int>>p;
    for(int i=0;i<arr.size();i++)
    {
        
        int sum=arr[i][0]+arr[i][1];
        // cout<<sum<<endl;
         p.push_back({i+1,sum});
    }
    sort(p.begin(),p.end(),cmp);
    // ans.push_back(0);
    for(int i=0;i<p.size();i++)
    {
        ans.push_back(p[i].first);
    }
    return ans;
}
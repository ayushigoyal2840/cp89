//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int n, int start[], int end[]) {
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[start[i]]++;
            mp[end[i]]--;
        }
        
        vector<pair<int,int>>vec;
        for(auto it : mp)
        {
            vec.push_back(it);
        }
        int c=0,ans=0;
        
        for(pair<int,int> i: vec)
        {
            ans+=i.second;
            c=max(ans,c);
        }
        return c;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends
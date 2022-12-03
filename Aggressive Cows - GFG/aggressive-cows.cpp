//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool safe(vector<int> &stalls,int k,int n,int  mid)
  {
      int count=0;
      int initial=stalls[0];
      for(int i=1;i<n;i++)
      {
          if(stalls[i]-initial>=mid)
          {
              count++;
              initial=stalls[i];
          }
      }
      count++;
      if(count>=k) return true;
      return false;
      
  }
    int solve(int n, int k, vector<int> &stalls) {
        if(stalls.size()<n) return -1;
        int m=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<stalls.size();i++)
        {
            m=max(m,stalls[i]);
            mn=min(n,stalls[i]);
        }
        sort(stalls.begin(),stalls.end());
        
        int left=0;
        int right=m-mn;
        int ans;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(safe(stalls,k,n,mid))
            {
                ans=mid;
                 left=mid+1;
                 
            }
            else
            {
                right=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends
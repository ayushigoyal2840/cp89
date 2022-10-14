//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int arr[], int n) 
    {
      unordered_map<int,int>mp;
      sort(arr,arr+n);
      for(int i=0;i<n;i++)
      {
          mp[arr[i]]++;
      }
      int ans=0;
      
      for(int i=n-1;i>=0;i--)
      {
          int aa=arr[i];
          if(mp.find(aa)!=mp.end())
          {
              ans+=aa;
              mp[aa]--;
              if(mp[aa]==0)
              mp.erase(aa);
              if(mp.find(aa-1)!=mp.end())
              {
                  mp[aa-1]--;
                  if(mp[aa-1]==0)
                  mp.erase(aa-1);
              }
          }
      }
      return ans;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends
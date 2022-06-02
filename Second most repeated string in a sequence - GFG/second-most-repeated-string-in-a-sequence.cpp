// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        string ans="";
        int mini=0;
        string help="";
        for(auto it:mp)
        {
            if(it.second>mini)
            {
                mini=it.second;
                help=it.first;
            }
        }
        mp[help]=0;
        mini=0;
        for(auto it:mp)
        {
            if(it.second>mini)
            {
                mini=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
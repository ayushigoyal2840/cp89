// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        long long int ans=0;
            for(long long int i=1;i<=n;i++)
            {
                long long int sum=(i*i);
                ans+=sum;
                // cout<<ans<<endl;
                if(ans==n)
                {
                    return i;
                }
                else if(ans>n)
                {
                    return i-1;
                }
            }
        return 0;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
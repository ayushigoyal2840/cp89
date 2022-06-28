// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long minii(long long a[],int k,int n)
    {
        priority_queue<int> maxh;
        for(int i=0;i<n;i++)
        {
            maxh.push(a[i]);
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        return maxh.top();
        
    }
    long long sumBetweenTwoKth( long long a[], long long n, long long x, long long y)
    {
        long long first=minii(a,x,n);
        long long second=minii(a,y,n);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>first and a[i]<second)
            {
                ans+=a[i];
            }
        }
        return ans;
    }
    
    
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends
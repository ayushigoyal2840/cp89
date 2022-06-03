// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long s, long long n, long long x, long long arr[])
    {
        long long sum=s;
        long long i=0;
        for(;i<n;i++)
        {
            arr[i]+=sum;
            sum+=arr[i];
            if(sum>x)
            break;
        }
        if(sum==x)
        return 1;
        while(x>=0 and i>=0)
        {
            if(x>=arr[i])
            {
                x-=arr[i];
            }
            if(x==0 or x-s==0)
            return 1;
            i--;
        }
        return 0;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends
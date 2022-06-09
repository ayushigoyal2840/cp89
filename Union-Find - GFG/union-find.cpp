// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int find(int i,int par[])
    {
        if(par[i]==i) return i;
        return par[i]=find(par[i],par);
    }
    public:
    void union_( int a, int b, int par[], int rank[]) 
    {
        //code here
        a=find(a,par);
        b=find(b,par);
        if(rank[a]>rank[b])
        par[b]=a;
        else if(rank[a]<rank[b])
        par[a]=b;
        else
        {
            par[b]=a;
            ++rank[a];
        }
    }
    
    //Function to check whether 2 nodes are connected or not.
    public:
    bool isConnected(int x,int y, int par[], int rank[])
    {
        //code here
        if(find(x,par)==find(y,par)) return true;
        return false;
    }
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends
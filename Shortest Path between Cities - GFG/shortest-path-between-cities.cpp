// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        int n=x,m=y;
        int i=0,j=0;
        while(n>0)
        {
            m=y;
            j=0;
            while(m>0)
            {
                if(m==n)
                {
                    return i+j;
                }
                m=m/2;
                j++;
            }
            n=n/2;
            i++;
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
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends
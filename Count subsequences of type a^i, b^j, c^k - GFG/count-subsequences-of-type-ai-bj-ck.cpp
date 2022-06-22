// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template 

class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
        const long long int mod=1e9+7;
        long long int a =0,ab=0,abc=0;
        for(char ch:s)
        {
            if(ch=='a')
            a=(2*a%mod+1)%mod;
            if(ch=='b')
            ab=(2*ab%mod+a)%mod;
            if(ch=='c')
            abc=(2*abc%mod+ab)%mod;
        }
        return abc;
    }
};

// { Driver Code Starts.
 
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.fun(s)<<endl;
    }
	return 0;
}  // } Driver Code Ends
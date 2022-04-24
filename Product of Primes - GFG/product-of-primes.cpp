// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
 bool prime[1000000 + 1];
 bool isprime(long long n)
 {
     for(long long i=2;i<=sqrt(n);i++)
     {
         if(n%i==0)
         return false;
     }
     return true;
 }
    void sieve()
{
    
    memset(prime, true, sizeof(prime));
 
    for (long long p = 2; p * p <= 1000000; p++)
    {
        if (prime[p] == true)
        {
            
            for (long long i = p * p; i <= 1000000; i += p)
                prime[i] = false;
        }
    }
}
    long long primeProduct(long long l, long long r){
        
    //   sieve();
       long long ans = 1;
      
       for(long long int i=l;i<=r;i++)
       {
          if(isprime(i)==true)
          {
              ans=(ans*i)%1000000007;
            //   cout<<i<<" ";
          }
        // cout<<prime[i]<<" ";
       }
       return ans%1000000007;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
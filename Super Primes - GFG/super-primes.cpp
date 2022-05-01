// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
const int N= 1e5+10;
bool sieve[N];
void create_sieve()
{
    sieve[0]=1;
    sieve[1]=1;
    for(int i=2;i*i<=N;i++)
    {
        if(!sieve[i])
        {
            for(int j=i*i;j<=N;j+=i)
            {
                sieve[j]=1;
            }
        }
    }
}
void generate(vector<int> &primes)
{
    for(int i=2;i<=N;i++)
    {
        if(!sieve[i])
        {
            primes.push_back(i);
        }
    }
}
class Solution{
public:	
	
	int superPrimes(int n)
	{
	    int count=0;
	    create_sieve();
	    if(n<=4)
	    return 0;
	    vector<int>primes;
	    generate(primes);
	    for(int i=5;i<=n;i+=2)
	    {
	        if(!sieve[i])
	        {
	            for(int j=0;j<primes.size() and primes[j]<=i/2;j++)
	            {
	                int sum=i-primes[j];
	                if(!sieve[sum])
	                count++;
	            }
	        }
	    }
	    return count;
	}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends
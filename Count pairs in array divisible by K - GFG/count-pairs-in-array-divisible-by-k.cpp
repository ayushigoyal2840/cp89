// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
   {
       vector<int> fq(K, 0);
       for(int i = 0; i < n; i++)
           fq[A[i] % K]++;
           
       long long ans = (fq[0] * (fq[0] - 1)) / 2;
       int i = 1, j = K - 1;
       while(i < j)
           ans += fq[i++] * fq[j--];
       
       if(i == j)
           ans += (fq[i] * (fq[i] - 1)) / 2;
       
       return ans;
   }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends
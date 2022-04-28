// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
     vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        vector<int> ans(2,0);
        
        int x = ceil(N/(float)(1+K));
        for(int i=0; i<x; i++){
            ans[0] += candies[i];
            ans[1] += candies[N-1-i];
        }
        
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
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends
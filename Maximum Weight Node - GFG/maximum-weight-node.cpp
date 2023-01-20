//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
 int maxWeightCell(int n, vector<int> Edge)

 

  {

       vector<int> arr(n,0);

       for(int i = 0;i<n;i++)

       {

           if(Edge[i]>=0)

           arr[Edge[i]]+=i; 

       }

       int ans = 0;

       int mx = INT_MIN;

       for(int i = 0;i<n;i++)

       {  

           if(arr[i]>=mx)

           {

               mx = arr[i];

               ans = i;

           }  

       }

       return ans;

  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends
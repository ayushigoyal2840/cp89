// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool rec(int start, vector<int>& arr, int k,int m)
    {
        int n=arr.size();
        if(start>=n)
        return true;
        for(int i=start+k-1;i<n;i++)
        {
            if((arr[i]-arr[start])>m)
            return false;
            if(rec(i+1,arr,k,m))
            return true;
        }
        return false;
    }
    bool partitionArray(int n, int k, int m, vector<int> &arr){
        sort(arr.begin(),arr.end());
        return rec(0,arr,k,m);
       
    }
};

// { Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, K, M;
        cin >> N >> K >> M;
        vector<int> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        Solution obj;
        bool ans = obj.partitionArray(N, K, M, A);
        if(ans){
            cout << "YES\n";
        }
        else{
            cout<< "NO\n";
        }
    }
}
  // } Driver Code Ends
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nthItem(int a, int b, int arr[], int brr[], int n)
    {
        set<int> ans;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(ans.find(arr[i]+brr[j])==ans.end())
                ans.insert(arr[i]+brr[j]);
            }
        }
        
        int tt=0,c=0;
        for(auto it=ans.begin();it!=ans.end();it++)
        {
            // cout<<*it<<" ";
            c++;
            if(c==n)
            {
                return *it;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int L1, L2, N;
        cin>>L1>>L2;
        int A[L1], B[L2];
        for(int i = 0;i < L1;i++)
            cin>>A[i];
        for(int i = 0;i < L2;i++)
            cin>>B[i];
        cin>>N;
        
        Solution ob;
        cout<<ob.nthItem(L1, L2, A, B, N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
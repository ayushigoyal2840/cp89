// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int n) {
        vector<int>even,odd;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }
        int p=0;
        for(int i=0;i<n and p<even.size();i+=2)
        {
            arr[i]=even[p]; 
            p++;
        }
         p=0;
        for(int i=1;i<n and p<odd.size();i+=2)
        {
            arr[i]=odd[p]; 
            p++;
        }
    }
};

// { Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends
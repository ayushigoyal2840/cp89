//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    int count=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(i>0){
	        if(arr[i]>arr[i-1])
	        {
	           // cout<<arr[i]<<" "<<arr[i-1]<<endl;
	            count++;
	        }}
	        if(count==1)
	        {
	            return arr[i-1];
	        }
	    }
	    if(count==0)
	    return -1;
	   // cout<<"hello"<<endl;
	    return -1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
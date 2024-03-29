// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
     
    void rearrange(long long *arr, int n) { 
    	int st=0,end=n-1;
    	long long max=arr[n-1]+1;
    	for(int i=0;i<n;i+=2){
    	    int c=arr[end--]%max;
    	    arr[i]=arr[i]+c*max;
    	    c=arr[st++]%max;
    	    arr[i+1]=arr[i+1]+c*max;
    	}
    	
    	for(int i=0;i<n;i++)
    	arr[i]/=max;
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends
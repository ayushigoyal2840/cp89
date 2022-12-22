//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {

        //code here

        long long cnt = 0,preSum = 0;

        unordered_map<long long, long long>mp;

        for(int i = 0; i < n; i++){ 

            preSum += arr[i];

            mp[preSum]++;

            if(preSum == 0)  cnt++;

        }

        for(auto &i : mp)   cnt += ((i.second)*(i.second-1))/2;

        return cnt;

}
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends
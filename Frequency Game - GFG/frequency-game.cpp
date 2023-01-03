//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
    // code here
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    int num=0,freq=INT_MAX;
    for(auto it : mp )
    {
        if(it.first>num and it.second<=freq)
        {
            num=it.first;
            freq=it.second;
        }
    }
    return num;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends
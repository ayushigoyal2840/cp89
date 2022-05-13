// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr[], int brr[], int n) {
            map<int,int>m1,m2;
            vector<int>v;
            int i=0;
            for(int i=0;i<n;i++)
            {
                if(m1.find(arr[i])==m1.end())
                m1[arr[i]]=i+n;
            }
            for(int i=0;i<n;i++)
            {
                if(m1.find(brr[i])!=m1.end())
                {
                    if(m1[brr[i]]<n)continue;
                    
                }
                m1[brr[i]]=i;
            }
            i=1;
             for(auto it = m1.rbegin(); ((i<=n) && (it!=m1.rend())); it++)
           {
               m2[it->second] = it->first;
               i++;
           }
           
           for(auto it = m2.begin(); it!=m2.end(); it++){
               v.push_back(it->second);
           }
           return v;
            
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
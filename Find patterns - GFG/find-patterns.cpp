//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
   int fun(string &s, string &t, int i, int j){
        if(j >= t.size()) return 1;
        if(i >= s.size()) return 0;
         if(s[i] == t[j]){
             s[i] = '#';
             return fun(s, t, i + 1, j + 1);
         } 
         return fun(s, t, i + 1, j);
    }
public:
    int numberOfSubsequences(string S, string W){
        int res = 0;
        for(int i = 0; i < S.size() && S.size() - i >= W.size(); i++){
            res += fun(S, W, i, 0);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends
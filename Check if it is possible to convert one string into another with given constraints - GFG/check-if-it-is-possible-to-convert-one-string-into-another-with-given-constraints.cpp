//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int ns, int nt) {
        // code here
        int i=0,j=0;
        
        while(i<ns && j<nt)
        {
            if(s[i]=='#')
            i++;
            else if(t[j]=='#')
            j++;
            else if(s[i]!=t[j] || (s[i]=='A' && i<j) || (s[i]=='B' && i>j))
            return 0;
            else 
            {
                i++;
                j++;
            }
        }
        
        while(i<ns && s[i]=='#')
        i++;
        
        while(j<nt && t[j]=='#')
        j++;
        
        return i==ns && j==nt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends
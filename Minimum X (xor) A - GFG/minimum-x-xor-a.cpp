// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        int count=0;
        for(int i=30;i>=0;i--)
        {
            if(((b>>i)&1)!=0)
            {
                count++;
            }
        }
        int x;
        for(int i=30;i>=0 and count>0;i--)
        {
            if((a>>i)&(1)!=0)
            {
                x=(x^(1<<i));
                count--;
            }
        }
        for(int i=0;i<=30 and count>0;i++)
        {
            if(((x>>i)&1)==0)
            {
                x=x^(1<<i);
                count--;
            }
        }
        return x;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends
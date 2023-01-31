//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
      public:

    int minRepeats(string A, string B) {

       int c = 1;

       string s = A;

       while(A.length() <B.length() )

       {

           A = A + s;

           c++;

       }

       

       if(A.find(B) != -1)

        {

            return c;

        }

         A = A +s;

         c++;

         if(A.find(B) != -1)

            return c;

        return -1;

     

        

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends
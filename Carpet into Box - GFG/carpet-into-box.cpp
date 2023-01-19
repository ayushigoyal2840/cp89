//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){

        int k = 0;

        int j = 0;

        int a = A,b=B,c=C,d=D;

        while(C<A){

            k++;

            A=A/2;

        }

         while(D<B){

            k++;

            B=B/2;

        }

      

        while(C<b){

            j++;

            b=b/2;

        }

        

         while(D<a){

            j++;

            a=a/2;

        }

        int ans = min(k,j);

        return ans;

        

    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends
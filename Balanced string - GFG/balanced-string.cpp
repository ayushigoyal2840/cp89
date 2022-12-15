//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        string str = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        
        //Calculating the sum of digits
        int sum = 0;
            int temp = N;
            while(temp > 0){
                sum+=temp%10;
                temp/=10;
            }
        
        //if N is greater than 26
        if(N > 26){
            while(N > 26){
                ans+=str;
                N-=26;
            }
        }
        
        
        //if N is Even
        if(N%2 == 0){
            int half = N/2;
            ans+=str.substr(0, half);
            ans+=str.substr(26-half, half);
        }
        else if(N%2 != 0){  //if N is Odd
            
            int big = (N+1)/2;
            int small = (N-1)/2;
            
            if(sum%2 == 0){
                ans+=str.substr(0, big);
                ans+=str.substr(26-small, small);
            }
            else if(sum%2 != 0){
                ans+=str.substr(0, small);
                ans+=str.substr(26-big, big);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
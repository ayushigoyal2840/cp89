// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
   string stringPartition(string S, int a, int b){
        int n = S.length();
        for(int i = 1; i < n; i++) {
            string one = S.substr(0, i);
            string two = S.substr(i);
            if(stoi(one) % a == 0 && stoi(two) % b == 0) 
                return one + " " + two;
        }
        
        return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends
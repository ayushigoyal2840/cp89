// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    char profession(int level, int pos){
         if(pos==1) return 'e';
         int newpos=(pos+1)/2;
         char ch=profession(level-1,newpos);
         if(newpos*2-1==pos) return ch;
         else
         {
             if(ch=='e')
             return 'd';
             return 'e';
         }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}  // } Driver Code Ends
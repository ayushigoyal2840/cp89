//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string s, string t)
{
     int first=INT_MIN,second=INT_MIN,third=INT_MIN;
     int count=0;
     if(s==t or s.size()!=t.size())
     return false;
    //  cout<<"hello";
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!=t[i])
         {
             count++;
         }
     }
    //  cout<<"hello";
     if(count>2)
     return false;
     vector<int>aa;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]!=t[i] )
         {
             aa.push_back(i);
         }
        
         
     }
     
     swap(s[aa[0]],s[aa[1]]);
    //  cout<<s<<" "<<t<<endl;
     if(s==t)
     return true;
     return false;
     
     
}
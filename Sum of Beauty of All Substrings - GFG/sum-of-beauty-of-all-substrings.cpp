//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void find(int &ma, int &mi, vector<int> &mp){
        ma=INT_MIN;
        mi=INT_MAX;
        
        for(int i=0;i<26;i++){
            if(mp[i]==0){
                continue;
            }
            ma=max(ma,mp[i]);
            mi=min(mi,mp[i]);
        }
    }
    
    int beautySum(string s) {
        // Your code goes here
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            vector<int> mp(26,0);
            for(int j=i;j<n;j++){
                mp[s[j]-'a']++;
                int ma,mi;
                find(ma,mi,mp);
                ans+=ma-mi;
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
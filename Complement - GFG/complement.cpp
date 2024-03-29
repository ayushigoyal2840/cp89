//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
      vector<int> findRange(string str, int n) {
        int c0 = 0;
        for(int i=0;i<n;++i){
            if(str[i]=='0'){
                ++c0;
            }
        }
        if(c0 == 0){
            vector<int>A;
            A.push_back(-1);
            return A;
        }
        int maxi = 0;
        int l = 0;
        int r = 0;
        int ml,mr;
        vector<int>s;
        for(int i=0;i<n;++i){
            if(str[i]=='0'){
                s.push_back(1);
            }
            else{
                s.push_back(-1);
            }
        }
        int sum = 0;
        for(int i=0;i<n;++i){
            if(s[i]+sum >= s[i]){
                sum = sum + s[i];
            }
            else{
                sum = s[i];
                l = i;
            }
            if(sum>maxi){
                maxi = sum;
                ml = l;
                mr = i;
            }
        }
        vector<int>ans;
        ans.push_back(ml+1);
        ans.push_back(mr+1);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends
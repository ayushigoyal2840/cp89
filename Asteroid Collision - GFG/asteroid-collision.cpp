//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &arr) {
        // code here
         vector<int> ans;
        ans.push_back(arr[0]);
        
        for(int i=1; i<n; i++){
            
            // same direction
            if(arr[i]*ans.back() > 0){
                ans.push_back(arr[i]);
            }
            
            else {
                bool flag = true;
                
                if(arr[i] < 0 && ans.back() > 0){
                    while(ans.empty() == false && ans.back() > 0){
                        
                        // If we have +4 -4 --> Both will get destroyed
                        if(ans.back() + arr[i] == 0)
                        {
                            ans.pop_back();
                            flag = false;
                            break;
                        }
                        
                        // If we have 4 -3 --> 4 will remain and -3 get destroyed
                        else if(abs(ans.back()) > abs(arr[i]))
                        {
                            flag = false;
                            break;
                        }
                        
                        // If we have 3 -4 --> 3 will get destroyed nad -4 gets inside
                        else {
                            ans.pop_back();
                        }
                    }
                }
                
                if(flag)
                    ans.push_back(arr[i]);
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

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
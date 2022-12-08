//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> ans; 
        auto isPrime = [&] (long long num){
            for(int i=2; i*i<=num; i++)if(num%i == 0)return false;
            return true;  
        };
        for(auto num:query)
        {
            int cnt = 0;
            for(int i=2; i*i<=num; i++)
                if(isPrime(i))cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	vector<int>SolveQueris(string str, vector<vector<int>>q){
	   int n=q.size();
	   int i=0;
	   vector<int> ans;
	   while(n--)
	   {
	       int a=q[i][0];
	       int b=q[i][1];
	       set<char>s;
	       //cout<<a<<" "<<b<<endl;
	       for(int i=a-1;i<b;i++)
	       {
	           s.insert(str[i]);
	       }
	       ans.push_back(s.size());
	       s.clear();
	       i++;
	   }
	   return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
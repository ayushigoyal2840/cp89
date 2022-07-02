// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int res;
    void dfs(int s, vector<vector<int>>edges,int d)
    {
        if(s==d)
        {
            res++;
            return;
        }
        for(int i=0;i<edges.size();i++)
        {
            if(edges[i][0]==s)
            {
                dfs(edges[i][1],edges,d);
            }
        }
        return ;
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    res=0;
	    dfs(s,edges,d);
	    return res;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
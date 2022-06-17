// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
 void doDFS(vector<int> adj[], int V, vector<int> &color, int c, bool &isOkay, int i){
        if(color[i] == 0){
            color[i] = c;
        }
        c = c == 1 ? -1 : 1;
        for(auto &e : adj[i]){
            if(color[e] == 0){
                doDFS(adj, V, color, c, isOkay, e);
            }
            else if(color[e] == c){
                continue;
            }
            else{
                isOkay = false;
                return;
            }
        }
    }


    
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V, 0);
	    bool isOkay = true;
	    for(int i = 0; i<V; i++){
	        if(color[i] == 0){
	            //1 means green 
	            //-1 means blue
	            doDFS(adj, V, color, 1, isOkay, i);
	            if(isOkay == false){
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
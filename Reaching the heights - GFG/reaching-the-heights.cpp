// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    bool same=true;
    int check=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]!=check)
        same=false;
    }
    if(same==true and n>1)
     return {-1};
    vector<int>up;
    vector<int>down;
    sort(a,a+n);
    for(int i=0;i<n/2;i++)
    {
        
        
            down.push_back(a[i]);
        
    }
    for(int i=n/2;i<n;i++)
    {
        
            up.push_back(a[i]);
        
    }
    sort(up.begin(),up.end());
    reverse(up.begin(),up.end());
    sort(down.begin(),down.end());
    vector<int>ans;
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ans.push_back(up[p]);
            p++;
        }
        else
        {
            ans.push_back(down[q]);
            q++;
        }
    }
    return ans;
}

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long>s;
        long long first=-1;
        long long sec=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
                first=i;
                break;
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==x)
            {
                sec=i;
                break;
            }
        }
        s.first=first;
        s.second=sec;
        return s;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends
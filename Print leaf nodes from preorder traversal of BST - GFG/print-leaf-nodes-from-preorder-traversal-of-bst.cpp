//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
       vector<int>v;

        stack<int>st;

        st.push(arr[0]);

        for(int i=1;i<N;i++)

        {

            if(st.top()>arr[i])

            {

                st.push(arr[i]);

            }

            else {

                int flag=0;

                    int temp=st.top();

                while(st.empty()==false && st.top()<arr[i])

                {

                    st.pop();

                    flag++;

                }

                st.push(arr[i]);

                if(flag>=2)

                {

                    v.push_back(temp);

                }

            }

        }

        v.push_back(arr[N-1]);

        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
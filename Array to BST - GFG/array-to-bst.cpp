// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
vector<int>res;
void solve(vector<int>& nums,int start,int end)
{
    if(start>end) return ;
    int mid=(start+end)/2;
    res.push_back(nums[mid]);
    solve(nums,start,mid-1);
    solve(nums,mid+1,end);
}
    vector<int> sortedArrayToBST(vector<int>& nums) {
        solve(nums,0,nums.size()-1);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends
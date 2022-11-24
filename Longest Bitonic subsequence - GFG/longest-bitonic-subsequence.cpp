//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	pair<vector<int>, vector<int>> LIS(vector<int> nums){

        int n = nums.size();

        vector<int> dpLeft(n, -1);

        vector<int> dpRight(n, -1);

        

        for(int i = 0;i < n; i++){

            int count = 1;

            int j = i - 1;

            while(j >= 0){

                if(nums[j] < nums[i]){

                    count = max(count, dpLeft[j] + 1);

                }

                j--;

            }

            dpLeft[i] = count;

        }

        for(int i = n - 1;i >= 0; i--){

            int count = 1;

            int j = i + 1;

            while(j < n){

                if(nums[j] < nums[i]){

                    count = max(count , dpRight[j] + 1);

                }

                j++;

            }

            dpRight[i] = count;

            

        }

        

        return {dpLeft, dpRight};

    }
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	     pair<vector<int>, vector<int>> p = LIS(nums); 

     int Max = 0;

     int n = nums.size();

     for(int i = 0; i < n; i++){

         Max = max(Max, p.first[i] + p.second[i] - 1);

     }

     

     return Max;

 
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
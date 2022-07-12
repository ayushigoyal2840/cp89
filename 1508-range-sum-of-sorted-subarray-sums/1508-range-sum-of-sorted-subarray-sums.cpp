class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<long long int> arr;
        long long int count=0;
        for(long long int i=0;i<nums.size();i++)
        {
            arr.push_back(nums[i]);
            for(long long int j=i+1;j<nums.size();j++)
            {
                count++;
                arr.push_back(arr[arr.size()-1]+nums[j]);
            }
        }
        sort(arr.begin(),arr.end());
        long long int sum=0;
        for(long long int i=left-1;i<right;i++)
            
        {
            sum=(sum+arr[i])%1000000007;
        }
        return sum;
    }
};
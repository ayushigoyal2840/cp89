class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> ans(nums.size(),0);
        int sum=nums[0];
        ans[0]=sum;
        for(int i=1;i<nums.size();i++)
        {
            ans[i]=ans[i-1]+nums[i];
        }
        return ans;
    }
};
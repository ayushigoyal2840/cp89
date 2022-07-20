class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<n and nums[j]==nums[j-1])
                        j++;
                    while(k>0 and nums[k]==nums[k+1])
                        k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
            i++;
            while(i<n and nums[i]==nums[i-1]) i++;
        }
        return ans;
    }
};
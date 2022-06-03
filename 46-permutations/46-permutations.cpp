class Solution {
public:
    vector<vector<int>> ans;
    void permute(int ind, vector<int>& nums)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
         }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            permute(ind+1,nums);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
     permute(0,nums);
        return ans;
    }
};
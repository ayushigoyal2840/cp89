class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>check = nums;
        
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int a = check[i];
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==a)
                {
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
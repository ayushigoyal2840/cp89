class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>big,small,equal;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                small.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                equal.push_back(nums[i]);
            }
            else
            {
                big.push_back(nums[i]);
            }
        }
         vector<int>ans;
        for(int i=0;i<small.size();i++)
        {
            ans.push_back(small[i]);
        }
        for(int i=0;i<equal.size();i++)
        {
            ans.push_back(equal[i]);
        }
        for(int i=0;i<big.size();i++)
        {
            ans.push_back(big[i]);
        }
        return ans;
    }
};
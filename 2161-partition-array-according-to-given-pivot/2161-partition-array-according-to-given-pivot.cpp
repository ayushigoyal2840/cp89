class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans(nums.size());
        int low=0,high=0,same=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                low++;
            else if(nums[i]==pivot)
                same++;
        }
        high = low+same;
        same = low;
        low=0;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]<pivot)
            {
                ans[low++]=nums[i];
            }
            else if(nums[i]==pivot)
            {
                ans[same++]=nums[i];
            }
            else 
            {
                ans[high++]=nums[i];
            }
            i++;
        }
        return ans;
    }
};
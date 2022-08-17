class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int num1=nums[i];
            int low=i+1;
            int high=nums.size();
            while(low<high)
            {
                int mid=(low+high)/2;
                if(nums[mid]==target-num1)
                {
                    return {i+1,mid+1};
                }
                else if(nums[mid] >= target-num1)
                {
                    high=mid;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(low!=nums.size() and nums[low]==target-num1)
                return {i+1,low+1};
            
        }
        return {0,0};
    }
};
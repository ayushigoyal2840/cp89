class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=(start+(end-start)/2);
            if(nums[mid]==target)
            {
                return mid;
            }
           else if(nums[start]<=nums[mid] and nums[mid]>=nums[end])
           {
               if(nums[start]<=target and nums[mid]>=target)
               {
                   end=mid-1;
               }
               else
               {
                   start=mid+1;
               }
           }
        else if(nums[start]>=nums[mid] and nums[mid]<=nums[end])
        {
            if(nums[mid]<=target and nums[end]>=target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
           else
           {
               if(target<=nums[mid])
               {
                   end=mid-1;
               }
               else
               {
                   start=mid+1;
               }
           }
        }
        return -1;
    }
};
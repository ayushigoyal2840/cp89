class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot=0;
        for(int i=0;i<nums.size();i++)
        {
            tot+=nums[i];
        }
        int sum=0,match=0;
        for(int i=0;i<nums.size();i++)
        {
            tot-=nums[i];
            if(tot-match==match)
                return i;
            match+=nums[i];
            tot+=nums[i];
        }
        return -1;
        
    }
};
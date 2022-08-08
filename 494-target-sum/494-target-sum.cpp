class Solution {
public:
    int f(int ind, vector<int>& nums, int tar, int i)
    {
        
        if(ind==0)
        {
             if(tar==0 and nums[0]==0) return 2;
             if(tar==0 or nums[0]==tar) return 1;
            return 0;
        }
        int nontake = f(ind-1,nums,tar,i);
        int take=0;
        if(tar>=nums[ind])
        {
            take=f(ind-1,nums,tar-nums[ind],i);
        }
        return take+nontake;
    }
    int findTargetSumWays(vector<int>& nums, int tar) {
        int n=nums.size();
        int tot=0;
        for(int i=0;i<nums.size();i++)
            tot+=nums[i];
        if((tot-tar)%2!=0)
            return 0;
        return f(n-1,nums,(tot-tar)/2,0);
        
    }
};
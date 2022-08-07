class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int zero=0,one=0;
        int fina=0;
        while(j<nums.size())
        {
           if(nums[j]==0)
               zero++;
            else one++;
            if(zero<2)
                fina=max(fina,one);
            else
            {
                while(zero>1)
                {
                    if(nums[i]==0) zero--;
                    else one--;
                    i++;
                }
            }
            j++;
        }
        if(zero==0)
            return fina-1;
        return fina;
    }
};
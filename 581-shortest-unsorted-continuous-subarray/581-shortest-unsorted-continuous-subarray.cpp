class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> ans;
        ans=nums;
        sort(ans.begin(),ans.end());
        int ff=-1,ss=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(ans[i]!=nums[i])
            {
                ff=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(ans[i]!=nums[i])
            {
                ss=i;
                break;
            }
        }
        if(ss==-1 and ff==-1) return 0;
        return ss-ff+1;
    }
};
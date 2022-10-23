class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);
        int first=0,second=0;int p=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    first=nums[i];
                    break;
                }
            }
        int sum=(nums.size()*(nums.size()+1))/2;
        int s2=0;
        for(auto it : s)
            s2+=it;
        
        
        
        return {first,sum-s2};
    }
};
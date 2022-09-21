class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                sum+=nums[i];
        }
            
        for(int i=0;i<queries.size();i++)
        {
            int pos=queries[i][0];
            int change=queries[i][1];
            int prev=nums[change];
            if(prev%2==0)
            {
                sum-=prev;
            }
            int nw=nums[change]+pos;
            if(nw%2==0)
            {
                sum+=nw;
            }
            nums[change]=nw;
            ans.push_back(sum);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
       map<int,int>mp;
       map<int,int> old;
        vector<pair<int,int>>pp;
        for(int i=0;i<mapping.size();i++)
        {
            old[i]=mapping[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            int nn=nums[i];
            stack<int>neww;
            
            while(nn!=0)
            {
                int rem=nn%10;
                neww.push(old[rem]);
                nn=nn/10;
            }
            int newnum=0;
            if(nums[i]==0)
            {
                newnum=old[0];
            }
            while(!neww.empty())
            {
                newnum=newnum*10+neww.top();
                neww.pop();
            }
           pp.push_back(make_pair(newnum,i));
        }
        
        sort(pp.begin(),pp.end());
        
        
        vector<int> ans;
        for(int i=0;i<pp.size();i++)
            ans.push_back(nums[pp[i].second]);
        return ans;
    }
};
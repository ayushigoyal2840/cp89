class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long ans=0,c=0;
        map<long long,long long>mp;
        for(int i=0;i<nums.size();i++)
        {
            // cout<<i-nums[i]<<endl;
            ans+=i - mp[nums[i]-i];
            mp[nums[i]-i]++;
        }
        return ans;
        
    }
};
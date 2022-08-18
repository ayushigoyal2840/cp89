class Solution {
public:
    int minSetSize(vector<int>& arr) {
       map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int>aa;
        for(auto it : mp)
        {
            aa.push_back(it.second);
        }
        sort(aa.begin(),aa.end());
        reverse(aa.begin(),aa.end());
        int sum=0;
        int count=0;
        for(int i=0;i<aa.size();i++)
        {
            // cout<<aa[i];
            sum+=aa[i];
            if(sum>=arr.size()/2)
            {
                count++;
                return count;
            }
            else
            {
                count++;
            }
        }
        return 0;
    }
};
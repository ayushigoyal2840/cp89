class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<mat.size();i++)
        {
            sum=0;
            for(int j=0;j<mat[i].size();j++)
            {
                sum+=mat[i][j];
            }
            mp[i]=sum;
            ans.push_back(sum);
        }
        multimap<int,int> mm;
        for(auto it : mp)
        {
            mm.insert(pair<int,int>(it.second,it.first));
        }
        ans.clear();
        
        for(auto it : mm )
        {
            
            if(k>0)
            ans.push_back(it.second);
            k--;
        }
        
        
        
        return ans;
    }
};
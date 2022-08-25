class Solution {
public:
    bool canConstruct(string r, string m) {
        sort(r.begin(),r.end());
        sort(m.begin(),m.end());
        map<char,int> mp;
        for(int i=0;i<m.size();i++)
        {
            mp[m[i]]++;
        }
        // cout<<r<<" "<<m<<endl;
        for(int i=0;i<r.size();i++)
        {
           
            if(mp.find(r[i])==mp.end())
                return false;
            else
            {
                mp[r[i]]--;
                if(mp[r[i]]==0) mp.erase(r[i]);
            }
             // cout<<mp[r[i]]<<" ";
        }
        return true;
    }
};
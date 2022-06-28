class Solution {
public:
    int minDeletions(string s) {
        map<char,int,greater<int>>mp;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        map<char,int>mp2;
        for(auto it : mp)
        {
            int m=it.second;
            if(mp2.find(m)==mp2.end())
            {
                mp2[m]=it.first;
                
            }
            else
            {
                while(mp2.find(m)!=mp2.end())
                {
                    m--;
                    // if(m==0)
                    //     break;
                    ans++;
                    cout<<it.first<<" ";
                }
                if(m!=0)
                mp2[m]=it.first;
            }
        }
        return ans;
    }
};
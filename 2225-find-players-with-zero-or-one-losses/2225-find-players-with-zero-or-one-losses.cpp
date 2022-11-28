class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>win;
        vector<int>loose;
        set<int>no;
        // vector<int>teams;
        for(int i=0;i<matches.size();i++)
        {
            int a = matches[i][0];
            int b= matches[i][1];
            no.insert(a);
            no.insert(b);
        }
   map<int,int>mp;
        for(auto it : no)
        {
            
            if(mp.find(it)==mp.end())
            {
                mp[it]=0;
            }
        }
        for(int i=0;i<matches.size();i++)
        {
            mp[matches[i][1]]++;
        }
        for(auto it : mp)
        {
            if(it.second==0)
            {
                win.push_back(it.first);
            }
            if(it.second==1)
            {
                loose.push_back(it.first);
            }
            // cout<<it.first<<it.second<<endl;
        }
       
        
        
        
        vector<vector<int>>ans;
        ans.push_back(win);
        ans.push_back(loose);
        return ans;
    
        
    }
};
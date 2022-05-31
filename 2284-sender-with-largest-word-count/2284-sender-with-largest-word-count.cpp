class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
      map<string,int>mp;
        for(int i=0;i<messages.size();i++)
        {
            string ss=messages[i];
            stack<string>sta;
            string aa="";
            // cout<<ss<<endl;
            for(int j=0;j<ss.size();j++)
            {
                if(ss[j]==' ')
                {
                    // cout<<aa<<endl;
                    sta.push(aa);
                    aa="";
                }
                else
                {
                    aa+=ss[j];
                }
            }
            sta.push(aa);
            if(mp.find(senders[i])==mp.end())
            {
                mp[senders[i]]=sta.size();
            }
            else
            {
                mp[senders[i]]+=sta.size();
            }
            while(!sta.empty())
            {
                // cout<<sta.top();
                
                sta.pop();
            }
        }
        int ind=0;
        string ans="";
        for(auto it : mp)
        {
            
            if(it.second>=ind)
            {
                ind=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};
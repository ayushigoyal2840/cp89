class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> sta;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(sta.size()==0) sta.push(s[i]);
            else
            {
                if(sta.top()==s[i])
                    sta.pop();
          else
              sta.push(s[i]);
        } }
            
        while(sta.size()!=0)
        {
            ans.push_back(sta.top());
            sta.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
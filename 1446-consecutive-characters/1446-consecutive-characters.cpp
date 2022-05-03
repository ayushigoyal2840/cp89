class Solution {
public:
    int maxPower(string s) {
        stack<char>sta;
        for(int i=0;i<s.size();i++)
        {
            sta.push(s[i]);
        }
        int ans=1,fina=1;
        while(!sta.empty())
        {
            char m = sta.top();
            sta.pop();
            if(sta.size()>0 and sta.top()==m)
            {
                ans++;
                fina=max(ans,fina);
            }
            else
            {
                ans=1;
            }
        }
        return fina;
    }
};
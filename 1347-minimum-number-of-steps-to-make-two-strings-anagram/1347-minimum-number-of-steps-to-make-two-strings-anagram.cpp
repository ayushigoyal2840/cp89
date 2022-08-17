class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp1;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(mp1[t[i]]>0)
            {
                mp1[t[i]]--;
            }
            else
            {
                ans++;
            }
        }
        return ans;
    }
};
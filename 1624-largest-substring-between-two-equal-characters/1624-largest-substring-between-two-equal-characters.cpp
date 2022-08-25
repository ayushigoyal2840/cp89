class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>first,last;
        for(int i=0;i<s.size();i++)
        {
            if(first.find(s[i])==first.end())
            {
                first[s[i]]=i;
            }
            else
            {
                continue;
            }
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            if(last.find(s[i])==last.end())
            {
                last[s[i]]=i;
            }
            else
            {
                continue;
            }
        }
        int ans=0;
        for(auto int i=0;i<s.size();i++)
        {
            int diff=abs(first[s[i]]-last[s[i]]);
            if(diff>ans)
            {
                ans=diff;
            }
        }
        return ans-1;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int res=INT_MIN;
        while(j<s.size())
        {
            if(mp[s[j]]>0)
            {
                mp[s[i]]--;
                i++;
            }
            else if(j<s.size() and mp[s[j]]==0)
            {
                mp[s[j]]++;
                j++;
                res=max(res,(j-i));
            }
        }
        return res;
    }
};
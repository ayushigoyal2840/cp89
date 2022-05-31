class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        unordered_map<char,int>mp2;
        int fina=INT_MAX;
        for(int i=0;i<target.size();i++)
        {
            mp2[target[i]]++;
        }
        for(int i=0;i<target.size();i++)
        {
            char c = target[i];
            if(floor(mp[c]/mp2[c])<fina)
            {
                fina=floor(mp[c]/mp2[c]);
            }
        }
        return fina;
    }
};
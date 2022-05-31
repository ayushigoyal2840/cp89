class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string>se;
        if(k>s.size())  return false;
        int need=1<<k;
        for(int i=0;i<=s.size()-k;i++)
        {
           se.insert(s.substr(i,k));
        }
        if(se.size()==need)
            return true;
        return false;
    }
};
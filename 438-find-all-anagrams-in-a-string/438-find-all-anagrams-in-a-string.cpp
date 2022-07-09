class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> a (26,0),b(26,0);
        int n = s.size();
        int m = p.size();
        if(m>n) return ans;
        int i;
        for(auto it : p)
        {
            a[it-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            b[s[i]-'a']++;
        }
        for( i=m;i<n;i++)
        {
            if(a==b)
            {
                ans.push_back(i-m);
            }
            b[s[i]-'a']++;
            b[s[i-m]-'a']--;
        }
        if(a==b)
            ans.push_back(i-m);
        return ans;
    }
};
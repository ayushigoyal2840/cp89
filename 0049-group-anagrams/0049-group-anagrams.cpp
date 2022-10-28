class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>>ans;
        vector<string>ss;
        map<string,vector<string>>mp;
        vector<string>dd;
        for(int i=0;i<strs.size();i++)
        {
            string check=strs[i];
            sort(check.begin(),check.end());
           
                mp[check].push_back(strs[i]);
            
            // mp[check]=strs[i];
        }
        for(auto it : mp)
        {
            ss=it.second;
            ans.push_back(ss);
            ss.clear();
        }
        return ans;
    }
};
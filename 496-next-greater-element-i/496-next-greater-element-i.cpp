class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& m, vector<int>& n) {
       stack<int> s;
        vector <int> ans;
        map<int,int> mp;
       for(int i=n.size()-1;i>=0;i--)
       {
           while(s.size()>0 and s.top()<n[i])
           {
               s.pop();
           }
           if(s.size()>0)
           {
               mp[n[i]]=s.top();
           }
           else
           {
               mp[n[i]]=-1;
           }
           s.push(n[i]);
       }
        for(auto it: m)
            ans.push_back(mp[it]);
       return ans;
    }
};
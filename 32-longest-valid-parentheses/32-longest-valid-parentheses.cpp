class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()!=0 and st.top().first=='(' and s[i]==')') st.pop();
            else
                st.push({s[i],i+1});
        }
        int ans=0,lr=s.size();
        while(st.size()>0)
        {
            pair p = st.top();
            ans=max(ans,lr-p.second);
            lr=p.second-1;
            st.pop();
        }
        ans=max(ans,lr);
        return ans;
    }
};
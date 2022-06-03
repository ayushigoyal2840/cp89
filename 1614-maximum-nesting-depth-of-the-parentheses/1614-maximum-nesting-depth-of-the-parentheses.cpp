class Solution {
public:
    int maxDepth(string s) {
        int open=0,close=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                open++;
            else if(s[i]==')')
            {
                open--;
            }
            close=max(close,open);
        }
        return close;
    }
};
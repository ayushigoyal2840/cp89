class Solution {
public:
    int i=0;
    string help(string& s, int& i)
    {
        string res;
        while(i<s.size() and s[i]!=']')
        {
            if(!isdigit(s[i]))
            res+=s[i++];
            else
            {
                int n=0;
                while(i<s.size() and isdigit(s[i]))
                {
                    n=n*10+(s[i++]-'0');
                    // i++;
                }
                i++; // '['
                string t = help(s, i);
                i++; // ']'
                while(n-- > 0)
                {
                    res+=t;
                }
            }
            
        }
        return res;
    }
    string decodeString(string s) {
      return  help(s,i);
        
    }
};
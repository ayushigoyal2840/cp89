class Solution {
public:
    string reverseWords(string s) {
        string fina="";
        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                ans+=s[i];
            }
            if(s[i]==' ')
            {
                reverse(ans.begin(),ans.end());
                
                fina+=ans;
                fina+=' ';
                ans="";
            }
        }
        // fina+=' ';
        reverse(ans.begin(),ans.end());
        fina+=ans;
        return fina;
    }
};
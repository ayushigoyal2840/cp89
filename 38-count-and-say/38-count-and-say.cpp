class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11&";
        int count=0;
        string ans="";
        n-=2;
        while(n--)
{
             ans="";
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    count++;
                }
                else
                {
                    if(count==0)
                    {
                        ans+=(to_string(1));
                        ans+=s[i];
                        count=0;
                    }
                    else
                    {
                        count++;
                        ans+=(to_string(count));
                        ans+=s[i];
                        count=0;
                    }
                }
            }
            s=ans;
            s+="&";
            // cout<<s<<endl;
           
        }
        return ans;
    }
};
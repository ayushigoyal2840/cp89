class Solution {
public:
    string reverseWords(string s) {
        stack<string>sta;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                ans+=s[i];
            }
            else
            {
                if(ans!="")
                sta.push(ans);
                ans="";
            }
        }
        sta.push(ans);
        string fina="";
        int nm=sta.size();
        int n=1;
        while(!sta.empty())
        {
            fina+=sta.top()+' ';
            sta.pop();
        }
        string aa="";int ff=0,ss=0;
        for(int i=0;i<fina.size();i++)
        {
            if(fina[i]!=' ')
            {
                ff=i;
                break;
            }
        }
        for(int i=fina.size()-1;i>0;i--)
        {
            if(fina[i]!=' ')
            {
                ss=i;
                break;
            }
        }
        for(int i=ff;i<=ss;i++)
        {
            aa+=fina[i];
        }
        // cout<<endl;
        return aa;
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for(int i=0;i<s.size();i++)
        {
            s1.push(s[i]);
        }
        string ss="";
        int h=0;
        while(!s1.empty())
        {
            if(h==0 and s1.top()!='#')
            {
                ss+=s1.top();
            }
            else if(s1.top()=='#')
            {
                h++;
            }
            else if(h>0 and s1.top()!='#')
            {
                h--;
            }
            s1.pop();
        }
        reverse(ss.begin(),ss.end());
        
        
         for(int i=0;i<t.size();i++)
        {
            s2.push(t[i]);
        }
        string tt="";
        int h1=0;
        while(!s2.empty())
        {
            if(h1==0 and s2.top()!='#')
            {
                tt+=s2.top();
            }
            else if(s2.top()=='#')
            {
                h1++;
            }
            else if(h1>0 and s2.top()!='#')
            {
                h1--;
            }
            s2.pop();
        }
        
        reverse(tt.begin(),tt.end());
        cout<<ss<<"  "<<tt<<endl;
     return (ss==tt);
    }
};
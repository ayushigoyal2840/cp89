class Solution {
public:
    int count(string s)
    {
        int i=0,a=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
            {
                a++;
            }
        }
        return a;
    }
    bool halvesAreAlike(string s) {
     string s1="";
        string s2="";
        for(int i=0;i<s.size()/2;i++)
        {
            s1+=s[i];
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            s2+=s[i];
        }
        // cout<<s1<<" "<<s2<<endl;
        int a=count(s1);
        int b=count(s2);
        if(a==b)
            return true;
        return false;
    }
};
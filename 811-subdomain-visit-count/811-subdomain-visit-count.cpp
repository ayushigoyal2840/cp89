class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cp) {
        map<string,int>mp;
        for(int i=0;i<cp.size();i++)
        {
            string s=cp[i];
            int j=0;
            for( j=0;j<s.size();j++)
            {
                if(s[j]==' ')
                {
                    break;
                }
            }
            string num=s.substr(0,j);
            string zero="";
            for(int ii=j+1;ii<s.size();ii++)
            {
                zero+=s[ii];
            }
            for(j=0;j<s.size();j++)
            {
                if(s[j]=='.')
                    break;
            }
             string first = s.substr(j+1,s.size()-1);
            int ind=0;
            bool flag=true;
            for( ind=j+1;ind<s.size();ind++)
            {
                if(s[ind]=='.')
                {
                    flag=false;
                    break;
                } 
            }
            int n=stoi(num);
            string second="";
            if(flag==false)
            {
                 second = s.substr(ind+1,s.size()-1);
            }
            
            // cout<<n<<" "<<first<<" "<<second<<" "<<zero<<endl;
            mp[first]+=n;
            if(flag==false)
            mp[second]+=n;
            mp[zero]+=n;
            
            
        }
        vector<string>ans;
        for(auto it : mp)
        {
            string a = to_string(it.second);
            a+=" ";
            a+=it.first;
            ans.push_back(a);
        }
        // vector<string>ans;
        return ans;
    }
};
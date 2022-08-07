#define mod 1000000007
class Solution {
public:
    long long int f(int n,int i,char c,vector<vector<int>>&dp,unordered_map<char,int>&mp)
    {
        if(i==n)
            return 1;
        if(dp[mp[c]][i]!=-1)
            return dp[mp[c]][i]%mod;
        long long  count=0;
        if(c=='a')
        {
            count+= f(n,i+1,'e',dp,mp);
        }
        if(c=='e')
        {
            count+=f(n,i+1,'a',dp,mp);
                count+=f(n,i+1,'i',dp,mp);
            
        }
        if(c=='i')
        {
            count+=f(n,i+1,'a',dp,mp);
             count+= f(n,i+1,'e',dp,mp);
             count+= f(n,i+1,'o',dp,mp);
             count+= f(n,i+1,'u',dp,mp);
            
        }
        if(c=='o')
        {
             count+= f(n,i+1,'i',dp,mp);
             count+= f(n,i+1,'u',dp,mp);
        }
        if(c=='u')
        {
             count+= f(n,i+1,'a',dp,mp);
        }
        return dp[mp[c]][i]=count%mod;
    }
    int countVowelPermutation(int n) {
        vector<vector<int>>dp(5,vector<int>(n+1,-1));
        unordered_map<char,int>mp;
        mp['a']=0;
        mp['e']=1;
        mp['i']=2;
        mp['o']=3;
        mp['u']=4;
         long long cnt = f(n, 1, 'a', dp, mp) + f(n, 1, 'e', dp, mp) + f(n, 1, 'i', dp, mp) + f(n, 1, 'o', dp, mp) + f(n, 1, 'u', dp, mp); 
        return cnt%mod;
        
    }
};
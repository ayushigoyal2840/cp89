class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int a) {
        int ans=0;
        sort(tokens.begin(),tokens.end());
         int lo=0,hi=tokens.size()-1;
        int points=0;
        while(lo<=hi and (a>=tokens[lo] or points>0))
        {
            while(lo<=hi and a>=tokens[lo])
            {
                a-=tokens[lo++];
                points++;
            }
            ans=max(ans,points);
            if(lo<=hi and points>0)
            {
                a+=tokens[hi--];
                points--;
            }
        }
      return ans;
    }
};
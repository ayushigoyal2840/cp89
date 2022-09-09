class Solution {
public: 
   static bool cmp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int big1=INT_MIN,big2=INT_MIN;
        sort(p.begin(),p.end(),cmp);
        int a=0;
       for(int i=p.size()-1;i>=0;i--)
       {
           if(p[i][1]<big1)
           {
               
               a++;
           }
          big1=max(big1,p[i][1]);
        }
        return a;
        
    }
};
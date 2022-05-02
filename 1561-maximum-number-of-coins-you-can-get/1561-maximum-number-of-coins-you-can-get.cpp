class Solution {
public:
    int maxCoins(vector<int>& piles) {
        deque<int>q;
        sort(piles.begin(),piles.end());
        for(int i=0;i<piles.size();i++)
        {
            q.push_back(piles[i]);
        }
        int ans=0;
        int i=0;
        while(!q.empty())
        {
           if(q.size()>2)
           {
               q.pop_front();
               cout<<q.back()<<" ";
               q.pop_back();
               // cout<<q.front()<<" ";
               ans+=q.back();
           }
            q.pop_back();
        }
        return ans;
    }
};
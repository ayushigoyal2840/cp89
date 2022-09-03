class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<pair<int,int>>q;
        vector<int>ans;
        for(int i=1;i<=9;i++)
            q.push({i,1});
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            int num=curr.first;
            int length = curr.second;
            
            if(length == n)
            {
                ans.push_back(num);
                continue;
            }
            
            int last = num%10;
            
            if(k==0)
                q.push({num*10+last,length+1});
            else
            {
                if(last+k<10)
                {
                    q.push({num*10+last+k,length+1});
                }
                if(last-k>=0)
                {
                    q.push({num*10+last-k,length+1});
                }
            }
        }
        return ans;
    }
};
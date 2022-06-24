class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int>p;
        long long int sum=0;
        for(int i=0;i<target.size();i++)
        {
            p.push(target[i]);
            sum+=target[i];
        }
        while(p.top()!=1)
        {
            sum-=p.top();
            if(sum==0 or sum>=p.top())
                return false;
            int old=p.top()%sum;
            if(old==0 and sum!=1)
                return false;
            
            p.pop();
            sum+=old;
            p.push(old);
        }
        return true;
        
    }
};
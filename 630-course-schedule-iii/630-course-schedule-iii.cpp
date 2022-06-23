class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        if(courses.size()<=0) return  0;
        sort(courses.begin(),courses.end(),[](const vector<int>& a, const vector<int>& b)
             {
                 return a[1]<b[1];
             });
        priority_queue<int>q;
        int sum=0;
        for(auto it : courses)
        {
            sum+=it[0];
            q.push(it[0]);
            if(sum>it[1])
            {
                sum-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};
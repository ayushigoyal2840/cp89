class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int,int>>p;
        int ans=INT_MAX;
        int ind=0;
        for(int i=points.size()-1;i>=0;i--)
        {
            int x1=points[i][0];
            int y1=points[i][1];
            
            if(x==x1 or y==y1)
            {
                 int dis=abs(x-x1)+abs(y-y1);
                 if(dis<=ans)
                 {
                     ans=dis;
                     ind=i;
                 }
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ind;
    }
};
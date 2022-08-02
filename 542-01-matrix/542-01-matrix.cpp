class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
        int fresh=0;
        vector<vector<int>> dis(mat.size(),vector<int>(mat[0].size() , 100000));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    dis[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            pair<int,int> x = q.front();
            q.pop();
            vector<int> di = {-1,0,1,0,-1};
            for(int i=0;i<4;i++)
            {
                int a = x.first+di[i];
                int b = x.second+di[i+1];
                if(a>=0 and b>=0 and a<mat.size() and b<mat[0].size())
                {
                    if(dis[a][b]>dis[x.first][x.second]+1)
                    {
                        dis[a][b]=dis[x.first][x.second]+1;
                        q.push({a,b});
                    }
                }
            }
        }
        return dis;
    }
};
class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& land,int i,int j,int &row,int &col)
    {
        int n=land.size();
        int m=land[0].size();
        land[i][j]=-1;
        row=max(i,row);
        col=max(j,col);
        if(i+1<n and land[i+1][j]==1)
        {
            dfs(land,i+1,j,row,col);
        }
        if(j+1<m and land[i][j+1]==1)
        {
            dfs(land,i,j+1,row,col);
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        for(int i=0;i<land.size();i++)
        {
            for(int j=0;j<land[0].size();j++)
            {
                if(land[i][j]==1)
                {
                    int row=i;
                    int col=j;
                    dfs(land,i,j,row,col);
                    ans.push_back({i,j,row,col});
                }
            }
        }
        return ans;
    }
};
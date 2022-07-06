class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> ans;
         if(n*m != r*c)
        {
            vector<vector<int>> aa = mat;
            return aa;
        }
        vector<vector<int>> aa(r,vector<int>(c));
        int i1=0,j1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j1==c)
                {
                    i1++;
                    j1=0;
                }
                aa[i1][j1++]=mat[i][j];
            }
        }
        
        return aa;
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int l=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            l=matrix[0].size();
            for(int j=0;j<(matrix[0].size())/2;j++)
            {
                swap(matrix[i][j],matrix[i][l-1]);
                l--;
            }
        }
    }
};
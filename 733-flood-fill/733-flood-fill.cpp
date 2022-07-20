class Solution {
public:
    void dfs(vector<vector<int>>& image , int i,int j,int color,int r,int c,int source)
    {
        if(i<0 or j<0 or i>=r or j>=c )
        {
            return ;
        }
        else if(image[i][j]!=source)
        {
            return ;
        }
        
        image[i][j]=color;
        dfs(image,i-1,j,color,r,c,source);
        dfs(image,i+1,j,color,r,c,source);
        dfs(image,i,j-1,color,r,c,source);
        dfs(image,i,j+1,color,r,c,source);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       if(image[sr][sc]==color)
           return image;
        int r=image.size();
        int c=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,color,r,c,source);
        
        return image;
    }
};
class Solution {
public:
    void dfs(vector<vector<int>>& image,int sr,int sc,int r,int c,int newc,int source)
    {
        if(sr<0 or sc<0 or sr>=r or sc>=c )
        {
            return;
            
        }
        else if(image[sr][sc]!=source)
        {
            return ;
        }
        image[sr][sc]=newc;
        dfs(image,sr+1,sc,r,c,newc,source);
        dfs(image,sr-1,sc,r,c,newc,source);
        dfs(image,sr,sc+1,r,c,newc,source);
        dfs(image,sr,sc-1,r,c,newc,source);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        int r=image.size();
        int c=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,r,c,newColor,source);
        return image;
    }
};
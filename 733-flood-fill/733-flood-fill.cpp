class Solution {
public:
    void dfs(int sr,int sc,int img,int color,vector<vector<int>>&image,int n,int m)
    {
        if(sr>=n or sc>=m or sr<0 or sc<0 or image[sr][sc]!=img)
            return;
        
        image[sr][sc]=color;
        
        dfs(sr,sc-1,img,color,image,n,m);
        
        dfs(sr,sc+1,img,color,image,n,m);
        
        dfs(sr+1,sc,img,color,image,n,m);
        
        dfs(sr-1,sc,img,color,image,n,m);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
            return image;
        int img=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        dfs(sr,sc,img,color,image,n,m);
        return image;
    }
};
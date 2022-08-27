class Solution {
public:
    void backtrack(string tiles,int level, int &count)
    {
        count++;
        for(int i=level;i<tiles.size();i++)
        {
            if(i!=level and tiles[i]==tiles[level])
                continue;
            swap(tiles[i],tiles[level]);
        backtrack(tiles,level+1,count);
        }
        
    }
    int numTilePossibilities(string tiles) {
        int count=-1;
        sort(tiles.begin(),tiles.end());
        backtrack(tiles,0,count);
        return count;
    }
};
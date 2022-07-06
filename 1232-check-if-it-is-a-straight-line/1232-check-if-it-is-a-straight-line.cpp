class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() <= 2) return true;
        int x1=coordinates[0][0],y1=coordinates[0][1];
        int x2=coordinates[1][0],y2=coordinates[1][1];
        for(int i=2;i<coordinates.size();i++)
        {
            int c_x=coordinates[i][0];int c_y=coordinates[i][1];
            if((y2-y1)*(c_x-x1)!=(x2-x1)*(c_y-y1)) return false;
        }
       return true; 
    }
};
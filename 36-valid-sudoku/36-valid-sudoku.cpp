class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.' and mp.find(board[i][j])!=mp.end())
                    return false;
                else
                mp[board[i][j]]++;
            }
            mp.clear();
        }
        mp.clear();
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.' and mp.find(board[j][i])!=mp.end())
                    return false;
                else
                mp[board[j][i]]++;
            }
            mp.clear();
        }
        mp.clear();
        unordered_map<int,unordered_map<int,int>>boxMat;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
               { if(boxMat[((i/3)*3) + j/3][board[i][j] - '0']) return false;
                    else boxMat[((i/3)*3) + j/3][board[i][j] - '0']++;}
            }
        }
        return true;
    }
};
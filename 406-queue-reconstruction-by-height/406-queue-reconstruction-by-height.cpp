class Solution {
    private:
    static bool cmp(vector<int>&p1 , vector<int> &p2)
    {
        return p1[0]==p2[0] ? p1[1]<p2[1] : p1[0] > p2[0];
    }
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& pp) {
        sort(pp.begin(),pp.end(),cmp);
        vector<vector<int>> res;
        for(vector<int>&each : pp )
        {
            res.insert(res.begin()+each[1],each);
        }
        return res;
    }
};
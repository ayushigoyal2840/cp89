class Solution {
public:
    static bool cmp(const int& x, const int& y) {
        int xc = __builtin_popcount(x), yc = __builtin_popcount(y);
        return xc == yc ? x < y : xc < yc;
    }
    vector<int> sortByBits(vector<int>& v) {
        sort(v.begin(), v.end(), cmp);
        return v;
    }
};
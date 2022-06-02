class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid=s.size()/2;
        int l = s.size()-1;
        for(int i=0;i<mid;i++)
        {
            swap(s[i],s[l]);
            l--;
        }
    }
};
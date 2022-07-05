class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(begin(nums),end(nums));
        int longest = 0;
        for(auto& i:s){
            if(s.count(i-1)) continue;
            int j=1;
            while(s.count(i+j)) j++;
            longest = max(longest,j);
        }
        return longest;
    }
};
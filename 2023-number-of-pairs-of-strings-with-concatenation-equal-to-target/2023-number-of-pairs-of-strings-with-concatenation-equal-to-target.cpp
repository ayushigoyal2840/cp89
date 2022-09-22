class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
         int n = nums.size();
        int prefixLength, targetLength = target.length(), count = 0;
        unordered_map<string, int> mp;
        for(auto suffix : nums) mp[suffix]++;
        
        for(auto prefix : nums){
            prefixLength = prefix.length();
            if(target.substr(0, prefixLength) == prefix){
                string suffix = target.substr(prefixLength);
                if(mp.find(suffix) != mp.end()){
                    count += (prefix == suffix) ? (mp[suffix] - 1) : (mp[suffix]); 
                }
            }
        }
        return count;
    }
};
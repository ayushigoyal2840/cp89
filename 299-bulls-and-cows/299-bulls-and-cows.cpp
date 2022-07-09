class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>mp,mp2;
        for(int i=0;i<secret.size();i++) {
            mp[secret[i]]++;
        }
        for(int i=0;i<secret.size();i++) {
            mp2[guess[i]]++;
        }
        int bulls=0,cows=0;
        for(int i=0;i<secret.size();i++) {
            if(secret[i]==guess[i]) {
                bulls++;
                mp[secret[i]]--;
                mp2[guess[i]]--;
            }
        }
        
        for(auto it: mp2) {
            if(mp.find(it.first)!=mp.end()) {
                cows+=min(it.second,mp[it.first]);
            }
        }
        string ans = "";
        ans+=to_string(bulls);
        ans+="A";
        ans+=to_string(cows);
        ans+="B";
        return ans;
    }
};
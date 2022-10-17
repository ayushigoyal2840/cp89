class Solution {
public:
    bool checkIfPangram(string sentence) {
        int check[26]={0};
        for(int i=0;i<sentence.size();i++)
        {
            check[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(check[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};
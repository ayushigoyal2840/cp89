class Solution {
public:
    vector<string> ans;
    void backtrack(int ind, vector<string>& temp, string  res, string digits)
    {
        if(ind==digits.size())
        {
            ans.push_back(res);
            return;
        }
        string t=temp[digits[ind]-'0'];
        for(int i=0;i<t.size();i++)
        {
            backtrack(ind+1,temp,res+t[i],digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return ans;
        vector<string> temp = {",",",","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string res;
        backtrack(0,temp,res,digits);
        return ans;
    } 
};
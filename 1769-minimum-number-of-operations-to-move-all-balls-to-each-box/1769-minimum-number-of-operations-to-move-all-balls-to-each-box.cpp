class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sum=0;
        vector<int> ans;
        for(int i=0;i<boxes.size();i++)
        {
            for(int j=i+1;j<boxes.size();j++)
            {
                if(boxes[j]=='1')
                {
                    sum+=(j-i);
                }
            }
            ans.push_back(sum);
            sum=0;
        }
        sum=0;
        for(int i=boxes.size()-1;i>=1;i--)
        {
            for(int j=0;j<i;j++)
            {
                if(boxes[j]=='1')
                {
                    sum+=(i-j);
                }
            }
            ans[i]+=sum;
            sum=0;
        }
        return ans;
    }
};
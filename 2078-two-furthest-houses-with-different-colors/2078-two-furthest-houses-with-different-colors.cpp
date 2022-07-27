class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = 0;
        for(int i=0;i<colors.size();i++)
        {
            int m = colors[i];
            for(int j=i+1;j<colors.size();j++)
            {
                if(m!=colors[j])
                {
                    
                    // cout<<ans<<" ";
                    // cout<<m<<" "<<colors[j]<<endl;
                    ans = max(ans, (j-i));
                }
            }
        }
        return ans;
    }
};
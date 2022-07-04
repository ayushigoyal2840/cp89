class Solution {
public:
    int candy(vector<int>& ratings) {
        int candies[ratings.size()];
        int n=ratings.size();
        int left[n],right[n];
        for(int i=0;i<n;i++)
        {
            left[i]=1;
            right[i]=1;
        }
        for(int i=1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                left[i]=left[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                right[i]=right[i+1]+1;
            }
        }
        int ans=0;
        for(int i=0;i<ratings.size();i++)
        {
            ans+=max(left[i],right[i]);
        }
        return ans;
    }
};
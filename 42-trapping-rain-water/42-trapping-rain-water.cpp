class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int left=0,right=n-1;
        int res=0;
        int maxleft=0,maxright=0;
        while(left<=right)
        {
            if(h[left]<=h[right])
            {
                if(h[left]>=maxleft)
                   maxleft=h[left];
                    else res+=maxleft-h[left];
                left++;
            }
            else
            {
                if(h[right]>=maxright)
                    maxright=h[right];
                else res+=maxright-h[right];
                right--;
            }
        }
        return res;
    }
};
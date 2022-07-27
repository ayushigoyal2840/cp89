class Solution {
public:
    int maxDistance(vector<int>& colors) {
       int start=0;
        int end = colors.size()-1;
        int s=0,e=0;
        while(colors[start]==colors[end])
            end--;
         s= end-start;
        start=0;
        end=colors.size()-1;
        while(colors[start]==colors[end])
        {
            start++;
        }
        e=end-start;
        return max(s,e);
    }
};
class Solution {
public:
    bool find132pattern(vector<int>& arr) {
       int mini=INT_MIN;
        int n=arr.size();
        stack<int>sta;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]<mini)
            {
                return true;
            }
            while(!sta.empty() and arr[i]>sta.top())
            {
                mini=sta.top();
                sta.pop();
            }
            sta.push(arr[i]);
            
        }
        return false;
    }
};
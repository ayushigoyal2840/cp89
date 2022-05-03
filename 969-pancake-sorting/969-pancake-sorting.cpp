class Solution {
public:
    void reverse(vector<int>& arr, int k)
    {
        for(int i=0;i<=k/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[k-i];
            arr[k-i]=temp;
        }
    }
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        for(int i=arr.size()-1;i>0;i--)
        {
            for(int j=1;j<=i;j++)
            {
                if(arr[j]==i+1)
                {
                    reverse(arr,j);
                    ans.push_back(j+1);
                    
                    break;
                }
            }
            reverse(arr,i);
            ans.push_back(i+1);
        }
        return ans;
    }
};
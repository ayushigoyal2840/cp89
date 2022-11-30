class Solution {
public:
     bool uniqueOccurrences(vector<int>& arr) {
         bool ans = true;
         vector<int> o;
         int i=0;
         sort(arr.begin(),arr.end());
         while(i<arr.size())
         {
             if(count(o.begin(),o.end(),count(arr.begin(),arr.end(),arr[i]))==1)
                { return false;
                 break;
             }
             else
             {
                 o.push_back(count(arr.begin(),arr.end(),arr[i]));
                 
                 i+=count(arr.begin(),arr.end(),arr[i]);
             }
         }
         return true;
    }
};
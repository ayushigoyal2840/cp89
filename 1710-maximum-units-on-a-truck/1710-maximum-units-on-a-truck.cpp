class Solution {
public:
   
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
      sort(box.begin(),box.end(),[](auto& box1,auto& box2)
      {
          return box1[1]>box2[1];
      });
        int tot=0;
        for(auto & i:box)
        {
            int numsize=min(truckSize,i[0]);
            tot+=numsize*i[1];
            truckSize-=numsize;
            
        }
        return tot;
    }
};
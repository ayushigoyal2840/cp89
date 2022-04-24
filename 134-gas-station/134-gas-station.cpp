class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currgas=0;
        int tot=0;
        int start=0;
        for(int i=0;i<gas.size();i++)
        {
            currgas+=(gas[i]-cost[i]);
            tot+=(gas[i]-cost[i]);
            if(currgas<0)
            {
                start=i+1;
                currgas=0;
            }
        }
        if(start<gas.size() and tot>=0)
            return start;
        return -1;
    }
};